class Solution {
public:
    int longestValidParentheses(string s) {
        int maxLen = 0;
        stack<int> st;

        int lastInvalid = -1;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(!st.empty()){
                    st.pop();
                    if(st.empty()){
                        maxLen = max(maxLen, i - lastInvalid);
                    }else{
                        maxLen = max(maxLen, i - st.top());
                    }
                }else{
                    lastInvalid = i;
                }
            }
        }
        return maxLen;
    }
};
