class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;   //1 : Find the middle
        ListNode* fast = head;

        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }


        ListNode* curr = slow;  //2 : Reverse the second half
        ListNode* prev = nullptr;

        while(curr != nullptr){
            ListNode* nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }


        ListNode* first = head;  //3: Compare
        ListNode* second = prev;

        while(second != nullptr){
            if(first -> val == second -> val){   //Reversed half will never be longer than first
                first = first -> next;
                second = second -> next;
            }else{
                return false;
            }
        }
        return true;
    }
};
