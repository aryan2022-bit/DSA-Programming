class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return NULL;
        if(root -> val == val) return root;

        TreeNode* leftSearch = searchBST(root -> left, val);
        if(leftSearch) return leftSearch;

        return searchBST(root -> right, val);
    }
};
