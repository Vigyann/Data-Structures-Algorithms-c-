 #include<iostream>
#define MAX 10
using namespace std;
int queue[MAX];
int front = -1, rear =-1;

void insert_element(int value) // Enqueue
{

    if(rear == MAX-1)
        cout<<"\n OVERFLOW";
    else if(front == -1 && rear == -1)
        front = rear = 0;
    else
        rear++;
    queue[rear] = value;
}
int delete_element() // Dequeue
{
    int val;
    if(front == -1)
    {
        cout<<"\n UNDERFLOW";
        return -1;
    }
else
    {
        val = queue[front];
        front++;
return val;
    }}
void peek()  // To find the first element
{
    if(front==-1 )
    {
        cout<<"\n QUEUE IS EMPTY";
        return ;
    }
    else
    {
        cout<< queue[front]<<"front element\n ";
    }
}

void display() // To show the data of queue
{
    int i;
    cout<<"\n";
    if(front == -1 )
        cout<<"\n QUEUE IS EMPTY";
    else
    {
        for(i = front; i <= rear; i++)
            cout<<"\t "<< queue[i];
    }
}
int main(){
int choice,val;
while(true){
    cout << "\n--- Queue Menu -\n";
        cout<<endl<<" 1. Insert an element";
        cout<<endl<< "2. Delete an element";
        cout<<endl<< "3. Peek";
        cout<<endl<<" 4. Display the queue";
        cout<<endl<<" 5. Exit\n ";
        cout<<endl<<" Enter your option : ";
        cin>>choice;



     switch(choice) {
 case 1:
    cout<<"enter value to insert :";
    cin>>val;
 insert_element(val);
    break;
 case 2:
    delete_element();
    break;
 case 3:
    peek();
    break;
 case 4:
    display();
    break;
 case 5:
    cout << "Exit\n";
    return 0;
 default:
    cout << "Invalid choice! Please try again.\n";
        } }
    return 0;

}



