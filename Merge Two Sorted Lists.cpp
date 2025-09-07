class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while(list1 != nullptr && list2 != nullptr){
            if(list1 -> val == list2 -> val){
                curr -> next = new ListNode(list1 -> val);
                curr = curr -> next;
                curr -> next = new ListNode(list2 -> val);
                curr = curr -> next;
                list1 = list1 -> next;
                list2 = list2 -> next;
            }
            else if(list1 -> val < list2 -> val){
                curr -> next = new ListNode(list1 -> val);
                curr = curr -> next;
                list1  = list1 -> next;
            }else{
                curr -> next = new ListNode(list2 -> val);
                curr = curr -> next;
                list2 = list2 -> next;
            }
        }

        while(list1 != nullptr){
            curr -> next = new ListNode(list1 -> val);
            curr = curr -> next;
            list1 = list1 -> next;
        }

        while(list2 != nullptr){
            curr -> next = new ListNode(list2 -> val);
            curr = curr -> next;
            list2 = list2 -> next;
        }

        return dummy -> next;
    }
};
