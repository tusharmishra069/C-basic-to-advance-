#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

// Function to insert a new node at a specific position
void insertAtPosition(Node*& head, int newData, int position) {
    Node* newNode = new Node();
    newNode->data = newData;

    // If the position is 1, insert at the beginning
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse the list to find the node before the insertion point
    Node* current = head;
    for (int i = 1; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    // Insert the new node at the correct position
    newNode->next = current->next;
    current->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}

int main() {
    Node* head = nullptr;

    // Insert elements at the beginning
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    // Insert at specific positions
    insertAtPosition(head, 4, 2); // Insert 4 at position 2
    insertAtPosition(head, 5, 1); // Insert 5 at position 1
    insertAtPosition(head, 6, 5); // Insert 6 at position 5

    printList(head);

}