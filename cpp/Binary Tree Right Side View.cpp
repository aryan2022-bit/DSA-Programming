class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root == NULL) return result;
        queue<TreeNode*> lev;
        lev.push(root);

        while(!lev.empty()){
            int size = lev.size();

            for(int i = 0; i < size; i++){
                TreeNode* curr = lev.front(); lev.pop();

                if(i == size - 1) result.push_back(curr -> val);

                if(curr -> left) lev.push(curr -> left);
                if(curr -> right) lev.push(curr -> right);
            }
        }
        return result;
    }
};
