#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* top;

public:

    Stack() {
        top = NULL;
    }


    void push(int value) {
        Node* temp = new Node();
        temp->data = value;
        if (top == NULL) {
            top = temp;
            top->next = NULL;
        } else {
            temp->next = top;
            top = temp;
        }
        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty, nothing to pop." << endl;
        } else {
            Node* temp = top;
            top = top->next;
            cout << "The value being deleted: " << temp->data << endl;
            delete temp;
        }
    }


    int peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return -1;
        } else {
            return top->data;
        }
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
        } else {
            Node* ptr = top;
            while (ptr != NULL) {
                cout << ptr->data << endl;
                ptr = ptr->next;
            }
        }
    }
};

int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.display();
                break;

            case 4:
                value = stack.peek();
                if (value != -1) {
                    cout << "Top element is: " << value << endl;
                }
                break;

            case 5:
                cout << "Exiting program." << endl;
                return 0;

            default:
                cout << "Invalid input. Please try again." << endl;
                break;
        }
    }
}


