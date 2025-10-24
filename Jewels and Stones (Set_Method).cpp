class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> jw;

        for(char c : jewels){
            jw.insert(c);
        }

        int cnt = 0;

        for(char s : stones){
            if(jw.count(s)) cnt++;
        }
        return cnt;
    }
};
