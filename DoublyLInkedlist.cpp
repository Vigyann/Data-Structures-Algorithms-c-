#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *prev;
    node *next;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

class DoublyLL{
private:
    node*head;
public:

    DoublyLL() {
        head = NULL;
    }
    void insertAtHead(int value) {
        node* newNode = new node(value);

        if (head == NULL) {

            head = newNode;
        }
        else {

            newNode->next = head;
            head->prev = newNode;

            head = newNode;
        }
    }
    void insertAtEnd(int value) {
    node* newNode = new node(value);

    if (head == NULL) {

        head = newNode;
    } else {
        node* temp = head;


        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}
void insertAtPosition(int value, int position) {
    node* newNode = new node(value);

    if (position == 1) {

        insertAtHead(value);
        return;
    }

    node* temp = head;
    int count = 1;


    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {

        insertAtEnd(value);
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {

        temp->next->prev = newNode;
    }

    temp->next = newNode;
}



    bool searchElements(int val){
        node *temp=head;
        while (temp != NULL) {
        if (temp->data == val) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}


    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << endl;
    }
};
   int main(){
       DoublyLL dll;

    dll.insertAtHead(10);
    dll.insertAtHead(20);
    dll.insertAtHead(30);
    dll.display();
    dll.insertAtHead(15);
    dll.display();
    dll.insertAtEnd(100);
    dll.display();
    dll.insertAtPosition(56,4);


    cout << "Doubly Linked List: ";
    dll.display();
    if (dll.searchElements(20)) {
        cout << "Element 20 found in the list" << endl;
    } else {
        cout << "Element 20 not found in the list." << endl;
    }
        if (dll.searchElements(40)) {
        cout << "Element 40 found in the list" << endl;
    } else {
        cout << "Element 40 not found in the list." << endl;
    }

    return 0;
   } ;






















