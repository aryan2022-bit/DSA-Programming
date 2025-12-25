class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;

        //Step 1
        ListNode* temp = headA;
        while(temp != nullptr){
            visited.insert(temp);
            temp = temp -> next;
        }

        //Step 2
        ListNode* curr = headB;
        while(curr != nullptr){
            if(visited.find(curr) != visited.end()) return curr;
            curr = curr -> next;
        }
        return nullptr;
    }
};
