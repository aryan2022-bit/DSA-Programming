class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr) return result;
        queue<TreeNode*> lev;
        lev.push(root);

        //setting a flag
        bool LTR = true;

        while(!lev.empty()){
            vector<int> level;
            int size = lev.size();

            for(int i = 0; i < size; i++){
                TreeNode* node = lev.front(); lev.pop();

                level.push_back(node -> val);

                if(node -> left) lev.push(node -> left);
                if(node -> right) lev.push(node -> right);
            }

            if(LTR){
                result.push_back(level);
            }else{
                reverse(level.begin(), level.end());
                result.push_back(level);
            }
            LTR = !LTR;
        }
        return result;
    }
};
