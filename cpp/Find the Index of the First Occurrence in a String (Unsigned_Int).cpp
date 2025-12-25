class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;

        for(int i = 0; i <= (int)haystack.size() - (int)needle.size(); i++){
            int j = 0;
            while(j < needle.size() && haystack[i+j] == needle[j]){
                j++;
            }
            if(j == needle.size()) return i;
        }
        return -1;
    }
};
