class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '('){
                st.push(ch);
                count++;
            }else if(ch == ')' && st.empty()) {
                count++;
            }else{
                st.pop();
                count--;
            }
        }
        return count;
    }
};
