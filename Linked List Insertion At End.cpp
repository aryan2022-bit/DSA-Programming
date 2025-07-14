/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Step 1: Create the new node
        Node* newNode = new Node(x);

        // Step 2: If the list is empty, return the new node as the head
        if (head == NULL) {
            return newNode;
        }

        // Step 3: Traverse to the end of the list
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Step 4: Insert new node at the end
        temp->next = newNode;

        // Step 5: Return the head (unchanged)
        return head;
    }
};
