class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int bal = 0;

       for(char c : s){
            if(c == 'L'){
                bal++;
            }else if(c == 'R'){
                bal--;
            }

            if(bal == 0) ans++;
       }
       return ans; 
    }
};
