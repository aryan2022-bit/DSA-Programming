class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* first = headA;
        ListNode* second = headB;

        while(first != second){
            first = (first == nullptr) ? headB : first -> next;

            second = (second == nullptr) ? headA : second -> next;
        }
        return first; //or u can do return second also
    }
};
