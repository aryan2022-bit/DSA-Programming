class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0, right = 0;
       int maxLen = 0;
       unordered_map<char, int> lastSeen;   //for checking index of lastSeen character in that particular window

       while(right < s.size()){
            if(lastSeen.count(s[right]) && lastSeen[s[right]] >= left){
                left = lastSeen[s[right]] + 1;
            }
            lastSeen[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
            right++;
       }
    return maxLen;
    }
};
