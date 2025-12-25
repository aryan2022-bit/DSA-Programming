class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        //Step 1
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        //Step 2
        for(int i = 0; i < s1.size(); i++){
            freq1[s1[i] - 'a']++;
        }

        //Step 3
        for(int i = 0; i < s1.size(); i++){
            freq2[s2[i] - 'a']++;
        }

        if(freq1 == freq2) return true;

        //Step 4
        for(int i = s1.size(); i < s2.size(); i++){
            //subtracting freq of element from left side for sliding
            freq2[s2[i - s1.size()] - 'a']--;

            //adding freq of element from right side 
            freq2[s2[i] - 'a']++;

            if(freq1 == freq2) return true;
        }
        return false;
    }
};
