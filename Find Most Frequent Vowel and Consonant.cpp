class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map <char, int> freq;

        for(char c : s){
            freq[c]++;
        }

        int volFreq = 0;
        int consFreq = 0;

        for(char c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                volFreq = max(volFreq, freq[c]);
            }else{
                consFreq = max(consFreq, freq[c]);
            }
        }
        return volFreq + consFreq;
    }
};
