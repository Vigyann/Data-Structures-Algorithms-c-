//undirected graph

/*#include<iostream>
using namespace std;
class Graph{
int v;
int** adjMatrix;

public:
    Graph(int v){
      this->v=v;
      adjMatrix= new int*[v];
      for(int i=0;i<v;i++){
        adjMatrix[i]= new int[v];
        for(int j=0;j<v;j++){
            adjMatrix[i][j]=0;
        }
      }
    }
    ~Graph(){
    for(int i=0;i<v;i++){
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;
    }

    void addEdge(int v,int w){
    adjMatrix[v][w]=1;
    adjMatrix[w][v]=1;
    }
    void displayMatrix(){
    cout<<"Adjacency Matrix:\n";
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    }

};

int main(){
int v=5;
Graph g(v);


g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(1,3);
g.addEdge(1,4);
g.addEdge(2,3);

g.displayMatrix();
return 0;
}
*/

//directed graph using linked list
#include<iostream>
#include<list>
using namespace std;

class Graph{
        int v;
        list<int>*adj;

     public:
        Graph(int v){
        this->v=v;
        adj= new list<int>[v];
        }
        ~Graph(){
        delete[] adj;
        }

        void addEdge(int v, int w ){
            adj[v].push_back(w);
            adj[w].push_back(v);
                     }

        void DisplayGraph(){
        for(int i=0;i<v;i++){
            cout<<"Vertex"<<i<<":";
            for(int adjNode :adj[i]){
                cout<<"->"<<adjNode;
            }
            cout<<endl;
                    }
        }

            };

    int main(){
    int v=5;
    Graph g(v);

    g.addEdge(0,1);

    g.addEdge(0,4);

    g.addEdge(1,2);

    g.addEdge(1,3);

    g.addEdge(1,4);

    g.addEdge(2,3);

    g.addEdge(3,4);
    g.DisplayGraph();
    return 0;
    }
