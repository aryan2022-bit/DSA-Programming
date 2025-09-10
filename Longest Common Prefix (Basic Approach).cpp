class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        string first = strs[0];

        for(int i = 0; i < first.size(); i++){
            char c = first[i];

            for(int j = 1; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != c) return result;
            }
            result.push_back(c);
        }
        return result;
    }
};
