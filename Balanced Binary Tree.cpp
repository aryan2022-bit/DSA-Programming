class Solution {
public:
    int height(TreeNode* root) {
        if(root == nullptr) return 0;

        return 1 + max(height(root -> left), height(root -> right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;

        int heightLeft = height(root -> left);
        int heightRight = height(root -> right);

        if(abs(heightLeft - heightRight) > 1) return false;

        return isBalanced(root -> left) && isBalanced(root -> right);
    }
};
