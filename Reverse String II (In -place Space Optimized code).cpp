class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();

        for(int i = 0; i < n; i = i + 2*k){

            int end = min(i+k, n);

            reverse(s.begin() + i, s.begin() + end);
        }
        return s;
    }
};
