class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr) return result;
        queue<TreeNode*> lev;
        lev.push(root);

        while(!lev.empty()){
            vector<int> level;
            int size = lev.size();

            for(int i = 0; i < size; i++){
                TreeNode* node = lev.front();
                lev.pop();

                level.push_back(node -> val);

                if(node -> left) lev.push(node -> left);
                if(node -> right) lev.push(node -> right);
            }
            result.push_back(level);
        }
        return result;
    }
};
