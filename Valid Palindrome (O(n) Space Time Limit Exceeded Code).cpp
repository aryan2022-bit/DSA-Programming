class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1 : Cleaning the string
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {
                if (c >= 'A' && c <= 'Z') {
                    c = c - 'A' + 'a';
                }
                cleaned = cleaned + c;
            }
        }

        //Step 2 : Checking if Palindrome
        int left = 0, right = cleaned.size() - 1;
        while(left < right){
            if(cleaned[left] != cleaned[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
