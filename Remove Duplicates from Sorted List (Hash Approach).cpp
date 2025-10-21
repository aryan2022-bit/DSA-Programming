class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> vals;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr != nullptr){
            if(vals.find(curr -> val) != vals.end()){
                prev -> next = curr -> next;
                ListNode* temp = curr;
                curr = curr -> next;
                delete temp;
            }else{
                vals.insert(curr -> val);
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};
