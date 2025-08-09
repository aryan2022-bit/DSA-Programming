class Solution {
public:
    int maxDepth(string s) {
        int currDepth = 0;
        int maxDepthVal = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                currDepth = currDepth + 1;
                maxDepthVal = max(maxDepthVal, currDepth);
            }
            
            if(s[i] == ')'){
                currDepth = currDepth - 1;
            }
        }
        return maxDepthVal;
    }
};
