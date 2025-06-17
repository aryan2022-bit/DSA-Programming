class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0;
        int start = 0;
        string result = "";

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                if(depth == 0) start = i;
                depth++;
            }else{
                depth--;

                if(depth == 0){
                    result = result + s.substr(start + 1, i - start - 1);
                }
            }
        }
        return result;
    }
};
