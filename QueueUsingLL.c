#include<iostream>
using namespace std;

class Node{
 public:
     int data;
     Node *next;

     Node(int data){
     this->data=data;
     this->tail=NULL;
     }
  };

  class queue{
     Node *head;
     Node  *tail;
     int size;
  public:
    queue(){
     this->head=NULL;
     this->tail=NULL;
     this->size=0;
    }
    void enqueue(int data){
    Node *newNode= new node(data);
    if(this->head=NULL) {
        //LL is empty
        this->head=this->tail=newNode;
    }
    else{
        this->tail->next=newNode;
        this->tail=newNode;
    }
    this->size++;
    }


    void dequeue(){
     if(this->head=NULL){
        //LL is empty
        return;
     }
     else{
        Node * oldhead=this->head;
        Node * newhead=this->head->next;
        this->head=newhead;
        if(this->head=NULL){
            this->tail=NULL;
        }
        oldhead->next=NULL;
        delete oldhead;
     }
     this->size--;
    }


   int getsize(){
   return this->size;
   }

   bool isempty(){
   return this->head=NULL;
   }


   int front(){
   if(head=NULL){
    return -1;
   }
   return this->head->data;
   }
  };

  int main(){
  queue qu;
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.enqueue(40);
  qu.dequeue();

  while(not qu.isempty()){
    cout<<qu.front()<<" ";
    qu.dequeue();
  }
  return 0;
  }






                                                                                                                                                                                                                                                                                                                                                                                                                    ;
