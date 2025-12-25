class Solution {
public:
    int helper(TreeNode* node, int maxValue){
        if(node == NULL) return 0;

        int count = 0;
        if(node -> val >= maxValue){
            count = 1;
            maxValue = max(maxValue, node -> val);
        }

        count = count + helper(node -> left, maxValue);
        count = count + helper(node -> right, maxValue);

        return count;
    }
    int goodNodes(TreeNode* root) {
        return helper(root, root -> val);
    }
};
