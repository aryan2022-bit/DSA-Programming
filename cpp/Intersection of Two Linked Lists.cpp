class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Step 1 : Counting
        ListNode* first = headA;
        ListNode* second = headB;

        int lenA = 0;
        while(first != nullptr){
            first = first -> next;
            lenA++;
        }
        first = headA; 

        int lenB = 0;
        while(second != nullptr){
            second = second -> next;
            lenB++;
        }
        second = headB;

        // Step 2 : Equaling the difference
        if(lenA > lenB){
            for(int i = 0; i < (lenA - lenB); i++){
                first = first -> next;
            }
        }else{
            for(int j = 0; j < (lenB - lenA); j++){
                second = second -> next;
            }
        }

        // Step 3 : Comparing for intersection
        while(first != nullptr && second != nullptr){
            if(first == second){
                ListNode* intersectVal = first;
                return intersectVal;
            }else{
                first = first -> next;
                second = second -> next;
            }
        }
        return nullptr;     
    }
};
