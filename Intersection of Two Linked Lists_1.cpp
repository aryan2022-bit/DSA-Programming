class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * first = headA, * second = headB;

        while(first != second){
            if(first == nullptr) first = headB;
            else first = first -> next;

            if(second == nullptr) second = headA;
            else second = second -> next;
        }
        return first;
    }
};
