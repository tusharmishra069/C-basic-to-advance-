#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = createNode(data);

    if (head == nullptr) { 
        head = newNode;
        newNode->next = head;  // Circular reference
    } else {
        Node* temp = head;
        // Traverse to the last node
        while (temp->next != head) {
            temp = temp->next;
        }

        // Update last node's next pointer and make new node the head
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}
void insertAtEnd(Node*& head, int data) {
    Node* newNode = createNode(data);

    if (head == nullptr) { 
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }
}
void insertAtPosition(Node*& head, int data, int position) {
    Node* newNode = createNode(data);

    if (position == 1) { 
        insertAtBeginning(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < position - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head && count != position - 1) {
        cout << "Position out of bounds" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtBeginning(head, 5);
    insertAtPosition(head, 15, 3);

    display(head);

    return 0;
}

