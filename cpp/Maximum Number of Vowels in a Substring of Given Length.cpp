class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e';
    }

    int maxVowels(string s, int k) {
        int currVowels = 0;
        int maxVowels = 0;

        for(int i = 0; i<k ; i++){
            if(isVowel(s[i])) currVowels++;
        }

        maxVowels = currVowels;

        for(int j = k; j< s.size(); j++){
            if(isVowel(s[j-k])) currVowels--;

            if(isVowel(s[j])) currVowels++;

            maxVowels = max(maxVowels, currVowels);
        }
        return maxVowels;
    }
};
