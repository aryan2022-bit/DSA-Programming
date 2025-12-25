#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
void insertion(struct Node** head, int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = (*head);
   (*head) = new_node;
}
void deleteNode(struct Node **head, int position) {
   if (*head == NULL) {
      return;
   }
   struct Node* temp = *head;
   if (position == 1) {
      *head = temp->next;
      free(temp);
      return;
   }
   for (int i = 1; temp != NULL && i < position - 1; i++) {
      temp = temp->next;
   }
   if (temp == NULL || temp->next == NULL) {
      return;
   }
   struct Node *next = temp->next->next;
   free(temp->next);
   temp->next = next;
}
void printLL(struct Node *node) {
   while (node != NULL) {
      cout << node->data << " ";
      node = node->next;
   }
}
int main() {
   struct Node* head = NULL;
   insertion(&head, 1);
   insertion(&head, 2);
   insertion(&head, 3);
   insertion(&head, 4);
   insertion(&head, 5);
   cout << "Linked list:" << endl;
   printLL(head);
   deleteNode(&head, 4);
   cout << "\nLinked list after deletion:" << endl;
   printLL(head);
    return 0;
}
