class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return nullptr;
        
        int len = 0;
        ListNode* curr = head;

        while(curr -> next != nullptr){
            len++;
            curr = curr -> next;
        }
        len++;
        curr -> next = head;

        int n = k % len;

        for(int i = 0; i < (len - n); i++){
            curr = curr -> next;
        }
        head = curr -> next;
        curr -> next = nullptr;

        return head;
    }
};
