class Solution {
public:
    string reverseStr(string s, int k) {
        string res = "";
        int i = 0;

        while(i < s.length()){
            int end = min(i + k - 1, (int)s.length() - 1);
            for(int j = end; j >= i; j--){
                res = res + s[j];
            }
            
            int keepEnd = min(i + 2*k, (int)s.length());
            for(int m = end + 1; m < keepEnd; m++){
                res = res + s[m];
            }

            i = i + 2*k;
        }
        return res;
    }
};
