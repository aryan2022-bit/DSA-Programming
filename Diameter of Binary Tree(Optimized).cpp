class Solution {
public:
    int maxDiameter = 0;

    int height(TreeNode* node){
        if(!node) return 0;

        int L = height(node -> left);
        int R = height(node -> right);

        maxDiameter = max(maxDiameter, (L + R));

        return 1 + max(L, R);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter = 0;
        height(root);
        return maxDiameter;
    }
};
