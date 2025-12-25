class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //Step 1 : Creating a vector for hashing approach
        vector<int> hash;

        //Step 2 : Traversing and pushing Values
        ListNode* temp = head;
        while(temp != nullptr){
            hash.push_back(temp -> val);
            temp = temp -> next;
        }

        //Step 3 : Comparison
        int left = 0;
        int right = hash.size()-1;

        while(left < right){
            if(hash[left] == hash[right]){
                left ++; right--;
            }else{
                return false;
            }
        }
        return true;
    }
};
