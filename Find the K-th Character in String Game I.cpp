class Solution {
public:
    char kthCharacter(int k) {
       string res = "a";

       while(res.size() < k){
        int n = res.size();
            for(int i = 0; i < n; i++){
                char nextChar = (res[i] - 'a' + 1)%26 + 'a';
                res = res + nextChar;
            }
       }
       return res[k-1]; 
    }
};
