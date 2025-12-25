class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // if(m == 0) return 0; --> This part already gets handle in the below loop if you dry run that carefully !

        for(int i = 0; i <= n - m; i++){
            int j = 0;

            while(j < m && haystack[i + j] == needle[j]){
                j++;
            }

            if(j == m) return i;
        }
        return -1;
    }
};
