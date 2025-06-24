class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0;
        int currCost = 0;
        int maxLen = 0;

        for(int right = 0; right < s.length(); right++){

            currCost = currCost + abs(t[right] - s[right]);

            while(currCost > maxCost){
                currCost = currCost - abs(t[left] - s[left]);
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
