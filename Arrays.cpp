//creating an array and inserting elements in array
/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter the size of array"<<endl;
cin>>size;
int arr[size];
cout<<"enter the elements of an array"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
*/
//searching an element in an array
/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter the size of array"<<endl;
cin>>size;
int arr[size];
cout<<"enter the elements of an array"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int n;
cout<<"Enter the no you want to search"<<endl;
cin>>n;
for(int i=0;i<size;i++){
    if(arr[i]==n){
        cout<<"the no "<<n<<"is at index "<<i<<endl;
    }
}
return 0;
}
*/

//inserting an element in array
/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter the size of array"<<endl;
cin>>size;
int arr[100];
cout<<"enter the elements of an array"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int pos,num;
size++;
cout<<"enter the position at which you want to insert"<<endl;
cin>>pos;
cout<<"enter the number which you want to insert"<<endl;
cin>>num;
for(int i=size;i>pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=num;
cout<<"updated array"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
*/
//deleting an element from array
/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter the size of array"<<endl;
cin>>size;
int arr[size];
cout<<"enter the elements of an array"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int pos;
cout<<"enter the position you want to delete"<<endl;
cin>>pos;
for(int i=pos;i<size;i++){
    arr[i]=arr[i+1];
}
size--;
cout<<"after deletion the array is"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

return 0;
}*/

//merging two arrays
/*#include<iostream>
using namespace std;
int main(){
int size1,size2;
cout<<"enter the size of 1st array"<<endl;
cin>>size1;
int arr[size1];
cout<<"enter the elements of 1st array"<<endl;
for(int i=0;i<size1;i++){
    cin>>arr[i];
}
cout<<"1st array is"<<endl;
for(int i=0;i<size1;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"enter the size of 2nd array"<<endl;
cin>>size2;
int arr1[size2];
cout<<"enter the elements of 1st array"<<endl;
for(int i=0;i<size2;i++){
    cin>>arr1[i];
}
cout<<"2nd array is"<<endl;
for(int i=0;i<size2;i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
int size3=size1+size2;
int mer_arr[size3];
for(int i=0;i<size1;i++){
    mer_arr[i]=arr[i];
}
for(int i=0;i<size2;i++){
    mer_arr[size1+i]=arr1[i];
}
cout<<"merged array is :"<<endl;
for(int i=0;i<size3;i++){
    cout<<mer_arr[i]<<" ";
}
cout<<endl;
return 0;
}*/
//creating a matrix
/*#include<iostream>
using namespace std;
int main(){
int row,col;
cout<<"enter no of row"<<endl;
cin>>row;
cout<<"enter no of columns"<<endl;
cin>>col;
int arr[row][col];
cout<<"enter the elements of matrix"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
cout<<"matrix is "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";;
    }
    cout<<endl;
}
return 0;
}
*/
//addition of two matrix
/*#include<iostream>
using namespace std;
int main(){
int row,col;
cout<<"enter no of row"<<endl;
cin>>row;
cout<<"enter no of columns"<<endl;
cin>>col;
int arr[row][col];
cout<<"enter the elements of matrix"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
cout<<"matrix is "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";;
    }
    cout<<endl;
}
int arr1[row][col];
cout<<"enter the elements of matrix 2"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr1[i][j];
    }
}
cout<<"matrix 2 is "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr1[i][j]<<" ";;
    }
    cout<<endl;
}
int sum[row][col];
cout<<"sum of matrices"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum[i][j]=arr[i][j]+arr1[i][j];
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
*/
//matrix multiplication
/*
#include<iostream>
using namespace std;
int main(){
int row,col;
cout<<"enter no of row"<<endl;
cin>>row;
cout<<"enter no of columns"<<endl;
cin>>col;
int arr[row][col];
cout<<"enter the elements of matrix"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
cout<<"matrix is "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";;
    }
    cout<<endl;
}
int row1,col1;
cout<<"enter row for mat 2"<<endl;
cin>>row1;
cout<<"enter col for mat 2"<<endl;
cin>>col1;
int arr1[row1][col1];
cout<<"enter the elements of matrix 2"<<endl;
for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>arr1[i][j];
    }
}
cout<<"matrix 2 is "<<endl;
for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cout<<arr1[i][j]<<" ";;
    }
    cout<<endl;
}
int res[row][col1];
cout<<"multiplication of matrices"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col1;j++){
            res[i][j]=0;
        for(int k=0;k<col;k++){
            res[i][j]+=arr[i][k]*arr1[k][j];
        }
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col1;j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
*/

//stack implementation using array
/*
#include<iostream>
using namespace std;

#define n 50

class stack{
 int *arr;
 int top;

 public:
     stack(){
     arr=new int[n];
     top=-1;
     }

void push(int val){
if(top==n-1){
    cout<<"stack is full"<<endl;
    return;
}
top++;
arr[top]=val;
}

void pop(){
if(top==-1){
    cout<<"stack is empty"<<endl;
    return;
}
top--;
}
void peek(){
if(top==-1){
    cout<<"stack is empty"<<endl;
    return;
}
cout<<arr[top]<<endl;
}
void isempty(){
if(top==-1){
    cout<<"stack is empty"<<endl;
    return;
}
}
void isfull(){
if(top==n-1){
    cout<<"stack is full"<<endl;
    return;
}
else{
    cout<<"not full"<<endl;
}
}
void display(){
for(int i=0;i<=top;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}

};
int main(){
stack s;
s.isempty();
s.push(5);
s.display();
s.push(10);
s.display();
s.push(15);
s.display();
s.push(20);
s.display();
s.pop();
s.display();
s.isfull();
return 0;

}
*/

//queue implementation using array
/*
#include<iostream>
using namespace std;

#define n 50
class queues{
  int *arr;
  int top;
  int rear;

  public:
      queues(){
      arr=new int[n];
      top=-1;
      rear=-1;
      }
void enquue(int data){
if(rear == n-1){
        cout<<"\n OVERFLOW";
        return;
        }
else if(top == -1 && rear == -1){
        top = rear = 0;
}
else{
        rear++;
}
    arr[rear] = data;
}
void dequue(){
if(top==-1 || top>rear ){
    cout<<"queue is empty"<<endl;
    return;
}
top++;
}

void display(){
if(top==-1 ||rear==-1){
    cout<<"queue is empty"<<endl;
    return;
}
for(int i=top;i<=rear;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
};
int main(){
queues q;
q.enquue(10);
q.display();
q.enquue(20);
q.display();
q.enquue(30);
q.display();
q.enquue(40);
q.display();
q.dequue();
q.display();
return 0;
}
*/

