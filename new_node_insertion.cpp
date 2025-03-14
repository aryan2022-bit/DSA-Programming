#include <iostream>
//#include <string.h>
//#include <cctype>
//#include <iomanip>
//#include <fstream>
using namespace std;
struct node{
	int data;
	struct node* next;
};

struct node* head = NULL;

void insertion_beginning(node*& head, int n) {
    node* newNode = new node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void insertion_end(node*& head, int n1) {
    node* newNode = new node(); 
    newNode->data = n1;
    newNode->next = NULL;

    
    if (head == NULL) {
        head = newNode;
    } else {
    
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int main() {
    int i, n, value;
    cout<<"Enter the no of node you want: "<<endl;
    cin >> n;

    struct node *head, *p, *temp;
    head = NULL;


    cout<<"Enter the value: ";
    for (i = 0; i < n; i++) {
        cin >> value; 
        temp = new node();
        temp->data = value; 
        temp->next = NULL; 

        if (head == NULL) {
            head = temp; 
            p = head;
        } else {
            p->next = temp;
            p = temp; 
        }
    }

    // Printing the linked list
    cout<<"Printing the linked LIst: "<<endl;
    p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    
    //insertion at beginning
    int val;
    cout<<"Enter the value you want to insert at begining: ";
    cin>>val;
    insertion_beginning(head,val);
    
    cout<<"Printing the linked List after insertion: "<<endl;
    p = head;
    while (p != NULL) {
        cout << p->data<<" ";
        p = p->next;
    }
    cout << endl;
    
    
    //insertion at end
    int ab;
    cout<<"Enter the value you want to insert at end: ";
    cin>>ab;
    insertion_end(head,ab);
    cout<<"Printing the linked List after insertion at end: "<<endl;
    p = head;
    while (p != NULL) {
        cout << p->data<<" ";
        p = p->next;
    }
    cout << endl;

    // Freeing allocated memory (optional)
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
