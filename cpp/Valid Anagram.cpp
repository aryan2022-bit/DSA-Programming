class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count1;
        unordered_map<char, int> count2; 

        for(char i : s){
            count1[i]++;
        }

        for(char j : t){
            count2[j]++;
        }

        return (count1 == count2) ? true : false;
    }
};
