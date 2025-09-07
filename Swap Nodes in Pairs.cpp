class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head -> next) return head;

        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* prev = dummy;

        while(prev -> next != nullptr && prev -> next -> next != nullptr){
            ListNode* first = prev -> next;
            ListNode* second = prev -> next -> next;

            //swap logic
            prev -> next = second;
            first -> next = second -> next;
            second -> next = first;

            prev = first;
        }
        return dummy -> next;
    }
};
