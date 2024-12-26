#include<iostream>
using namespace std;

struct item
{
    int value;
    int priority;
};

item pr[100000];
//pointer to last index means its empty
int size=-1;

void enqueue(int value,int priority){
  size++;
  pr[size].value=value;
  pr[size].priority=priority;
  }

  int peek(){
  int highest_priority=INT_MIN;
  int ind=-1;

  for(int i=0;i<=size;i++){
    if(highest_priority=pr[i].priority && ind>-1 && pr[ind].value<pr[i].value){
        highest_priority=pr[i].priority;
        ind=i;
    }
    else if(highest_priority<pr[i].priority){
        highest_priority=pr[i].priority;
        ind=i;
    }
  }
  return ind;
  }

  void dequeue(){
  int ind=peek();
  for(int i=ind;i<size;i++){
    pr[i]=pr[i+1];
  }
  size--;

  }


  int main(){
  enqueue(10,2);
  enqueue(14,4);
  enqueue(16,4);
  enqueue(12,3);
  enqueue(10,2);
   int ind=peek();
   cout<<pr[ind].value<<endl;

   dequeue();

   ind=peek();
   cout<<pr[ind].value<<endl;
   return 0;

  }
