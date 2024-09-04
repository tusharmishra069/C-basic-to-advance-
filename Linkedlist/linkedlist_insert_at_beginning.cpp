#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int newData) {
    Node* newnode = new Node();
    
    newnode->data = newData;
    

    newnode->next = head;// Make the new node point to the current head

    head = newnode;// Update the head to point to the new node
}

void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}

int main() {
    Node* head = nullptr; // Initialize an empty list
    
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);
    display(head);
}
