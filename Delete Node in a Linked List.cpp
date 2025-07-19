class Solution {
public:
    void deleteNode(ListNode* node) {
        // Copy the next node's value into the current node
        node->val = node->next->val;

        // Save the pointer to the next node to delete it
        ListNode* temp = node->next;

        // Skip over the next node
        node->next = node->next->next;

        // Free the memory of the skipped node
        delete temp;
    }
};
