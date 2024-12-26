/*
*****
*****
*****
*****
*****


#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
*/

/*
*
**
***
****
*****


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
1
12
123
1234
12345


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
           cout<<j;
        
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
1
22
333
4444
55555


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
*****
****
***
**
*


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
12345
1234
123
12
1


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
            cout<<N-j+1;
            
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(5);
    return 0;
}
*/

/*
     *
   * * *
 * * * * *
 .....
  
#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
......
 * * * * *
   * * *
     *


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*N-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
     *
   * * *
 * * * * *
 * * * * *
   * * *
     *


#include<iostream>
using namespace std;

void erect_pyramid(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        }}
void inverted_pyramid(int N){
    for(int i=0;i<N;i++){        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*N-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;

}}
int main(){
    int N=5;
    erect_pyramid(N);
    inverted_pyramid(N);
    return  0;
}
*/


/*
*
**
***
****
*****
****
***
**
*


#include<iostream>
using namespace std;

void upper_pattern(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}
void lower_pattern(int N){
    for(int i=1;i<=N-1;i++){
        for(int j=N;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){
    int N=5;
    upper_pattern(N);
    lower_pattern(N);
    return 0;
}
*/

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1


#include<iostream>
using namespace std;

void pattern(int N){
    int start=1;
    for(int i=1;i<=N;i++){
        if(i%2==0){
            start= 0;
        }
        else{
            start=1;
        }
        
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;

}
*/

/*
1      1
12    21
123  321
12344321

#include<iostream>
using namespace std;

void pattern(int N){
    int spaces=(2*(N-1));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        spaces-=2;
    }
}

int main(){
    int N=4;
    pattern(N);
    return 0;
}
*/

/*
1
2 3
4 5 6
7 8 9 10

#include<iostream>
using namespace std;
void pattern(int N){
    int z=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<z<<" ";
            z++;
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;

}
*/

/*
A
AB
ABC
ABCD


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<=N;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int N=5;
    pattern(N);
    return 0;

}
*/

/*
ABCDE
ABCD
ABC
AB
A

#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<=N;i++){
        for(char ch='A';ch<='A'+(N-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(5);
    return 0;
}
*/
/*
A
BB
CCC
DDDD
EEEEE


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<=N;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
           cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/
  /*
    A
   ABA
  ABCBA
  ...
  

 #include<iostream>
 using namespace std;

 void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint)
              { ch++;}
              else {ch--;}
          }
          //for(int j=0;j<N-i-1;j++){
           //   cout<<" ";
          //}
          cout<<endl;
    }
 }
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

/*
E
DE
CDE
BCDE
ABCDE


#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
      for(char ch=('A'+N-1)-i;ch<=('A'+N-1);ch++)
      {
        cout<<ch<<" ";
      }
      cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(5);
    return 0;
}



#include<iostream>
using namespace std;

void up_leftpattern(int N){
    int inis=0;
   
    for(int i=0;i<=N;i++){
             for(int j=N;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
              cout<<" ";
          }
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          inis+=2;
        cout<<endl;
    }
    int ini=2*N-2;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<=ini;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        ini-=2;
        cout<<endl;
    }
}

int main(){
    int N=5;
    up_leftpattern(N);

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=1;i<=N;i++){
        int ini=2*N-2;
        for(int j=1;j<=i;j++){
           cout<<"*";
        }
        for(int j=0;j<ini;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        ini-=2;
        cout<<endl;
    }
    int inis=0;
   
    for(int i=0;i<=N-1;i++){
             for(int j=N;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
              cout<<" ";
          }
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          inis+=2;
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}

*/
/*
*****
*   *
*   *
*   *
*****

#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==0|| j==0 || i==N-1 || j==N-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern(N);
    return 0;
}
*/

#include <iostream>
using namespace std;

void pattern22(int n)
{
     for(int i=0;i<2*n-1;i++){
         
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         cout<<endl;
     }
      
}
int main(){
    int N=4;
    pattern22(N);
    return 0;
}