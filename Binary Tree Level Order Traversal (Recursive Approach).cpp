class Solution {
public:
    void helper(TreeNode* node, int level, vector<vector<int>>& result){
        if(node == nullptr) return;

        if(result.size() == level){
            result.push_back({});
        }

        result[level].push_back(node -> val);

        helper(node -> left, level + 1, result);
        helper(node -> right, level + 1, result);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> result;
       helper(root, 0, result);
       return result; 
    }
};
