#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;

    if (!head) {
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

// Function to delete a node 
void deleteNode(Node*& head, int key) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }

    Node* curr = head;
    Node* prev = nullptr;

    // Case 1: Deleting the only node in the list
    if (curr->data == key && curr->next == head) {
        delete curr;
        head = nullptr;
        return;
    }

    // Case 2: Deleting the head node (key matches head)
    if (head->data == key) {
        while (curr->next != head) {
            curr = curr->next;  // Move to the last node
        }
        curr->next = head->next;  // Last node points to the second node
        Node* temp = head;        // Store the old head
        head = head->next;        // Move head to the next node
        delete temp;              // Delete the old head
        return;
    }

    // Case 3: Deleting a node other than the head
    prev = head;
    curr = head->next;

    while (curr != head && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    // If the node to be deleted is found
    if (curr->data == key) {
        prev->next = curr->next;
        delete curr;
    } else {
        cout << "Node with value " << key << " not found.\n";
    }
}


void printList(Node* head) {
    if (!head) {
        cout << "List is empty.\n";
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

    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);

    cout << "Original Circular Linked List: ";
    printList(head);

    // Delete node 20
    deleteNode(head, 20);
    cout<<"deleted: ";
    printList(head);

    return 0;
}
