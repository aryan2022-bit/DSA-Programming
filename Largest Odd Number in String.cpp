class Solution {
public:
    string largestOddNumber(string num) {
        int s = num.size();

        for(int i = s-1; i >= 0; i--){
            if((num[i] - '0')%2 == 1){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};
