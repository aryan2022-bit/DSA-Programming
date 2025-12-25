class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char, int> freq;

        for(char c : stones){
            freq[c]++;
        }

        int total = 0;

        for(char c : jewels){
            total = total + freq[c];
        }

        return total;
    }
};
