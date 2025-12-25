//wap to insert and delete element in a doubly linked list and print list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr && temp->data != value)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Element not found!" << endl;
        return;
    }

    if (temp->prev != nullptr)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != nullptr)
        temp->next->prev = temp->prev;
    
    delete temp;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    
    cout << "Doubly Linked List after insertion: ";
    printList(head);
    
    deleteNode(head, 20);
    cout << "Doubly Linked List after deletion of 20: ";
    printList(head);
    
    return 0;
}

