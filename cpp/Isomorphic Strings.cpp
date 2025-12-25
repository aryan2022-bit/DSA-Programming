class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> mapST; // s → t
        unordered_map<char, char> mapTS; // t → s (to ensure one-to-one)

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If c1 is already mapped
            if (mapST.count(c1)) {
                if (mapST[c1] != c2) return false; // inconsistent mapping
            } else {
                // If c2 is already mapped to some other character
                if (mapTS.count(c2)) return false;

                // Create new mapping
                mapST[c1] = c2;
                mapTS[c2] = c1;
            }
        }

        return true;
    }
};
