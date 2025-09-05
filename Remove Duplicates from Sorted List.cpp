class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // ListNode* dummy = new ListNode(0);
        // dummy -> next = head;

        ListNode* curr  = head;
        int len = 0;

        while(curr != nullptr){
            len++;
            curr = curr -> next;
        }
        curr = head;

        for(int i = 1; i <= len && curr -> next != nullptr; i++){
            if(curr -> val == curr -> next -> val){
                ListNode* temp = curr -> next;
                curr -> next = curr -> next -> next;
                delete temp;
            }else{
                curr = curr -> next;
            }
        }

        return head;
    }
};
