class Solution {
public:
    string largestOddNumber(string num) {

        int k = num.length();
        int itr = 0;

       for(int i = k - 1; i >= 0; i--){
            if(num[i] % 2 != 0) return num.substr(0, k - itr);
            itr++;
       } 
       return "";
    }
};
