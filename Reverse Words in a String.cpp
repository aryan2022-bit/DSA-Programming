class Solution {
public:
    string reverseWords(string s) {
        string newStr = "";
        string ansStr = "";

        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] != ' '){
                newStr = s[i] + newStr;
            }else{
                if(!newStr.empty())
                ansStr = ansStr + newStr + " ";
                newStr = "";
            }   
        }
        if(!newStr.empty()){
                ansStr = ansStr + newStr + " ";
            }

            if(!ansStr.empty() && ansStr.back() == ' '){
                ansStr.pop_back();
            }
        return ansStr;
    }
};
