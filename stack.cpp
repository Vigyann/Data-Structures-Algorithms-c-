//stack using array

#include<iostream>
using namespace std;
#define max 5
class stack{
 int top;
 int arr[max];
 public:
  stack(){
  top=-1;
  }
  void push(int val){
  if (top==max-1){
    cout<<"Overflow"<<"\n";
    return;
  }
  else{
    top++;
    arr[top]=val;
    cout<<val<<"pushed\n ";
  }
  }
  void pop(){
  if(top==-1){
    cout<<"underflow"<<"\n";
    return;
  }
  else{
    cout<<arr[top]<<"popped out\n";
    top--;
  }
  }
  void peek(){
  if(top==-1){
    cout<<"empty array";
    return;
  }
  else{
    cout<<arr[top]<<"peeked out\n";
  }
  }
  void display(){
  if(top==-1){
    cout<<"stacked array is empty"<<"\n";
    return;
  }
  else{
    cout<<"stacked array is"<<"\n";
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
  }
  }
};

int main(){
stack s;
int choice,val;
while(true){
    cout << "\n--- Queue Menu -\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

     switch(choice) {
 case 1:
    cout<<"enter value to push :";
    cin>>val;
    s.push(val);
    break;
 case 2:
    s.pop();
    break;
 case 3:
    s.peek();
    break;
 case 4:
    s.display();
    break;
 case 5:
    cout << "Exit\n";
    return 0;
 default:
    cout << "Invalid choice! Please try again.\n";
        } }
    return 0;

}


