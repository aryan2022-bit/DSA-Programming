class Solution {
public:
    int maxDepth(TreeNode* root){
        if(root == nullptr) return 0;

        return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;

        int L = maxDepth(root -> left);
        int R = maxDepth(root -> right);

        return max((L + R), max(diameterOfBinaryTree(root -> left), diameterOfBinaryTree(root -> right)));
    }
};
