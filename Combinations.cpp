class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> path;
        combine2(1, n, k, path, result);
        return result;
    }
    void combine2(int i, int n, int k, vector<int>& path, vector<vector<int>>& result){
        //Base Condition 1
        if(path.size() == k){
            result.push_back(path);
            return;
        }

        //Base Condition 2
        if(i > n) return;

        //Include
        path.push_back(i);
        combine2(i+1, n, k, path, result);

        //Backtrack
        path.pop_back();

        //Exclude
        combine2(i+1, n, k, path, result);
    }
};
