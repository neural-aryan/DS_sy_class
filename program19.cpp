//wap to create a stack of 10 elements using linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == nullptr) {
        cout << "Stack Underflow" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

void display() {
    Node* temp = top;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int size = 10;
    int value;
    cout << "Enter " << size << " values:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> value;
        push(value);
    }

    cout << "Stack after pushes: ";
    display();

    pop();

    cout << "Stack after one pop: ";
    display();

    return 0; 
}


