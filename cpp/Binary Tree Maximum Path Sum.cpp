class Solution {
public:
    int helper(TreeNode* node, int &maxSum){
        if(node == NULL) return 0;

        int L = helper(node -> left, maxSum);
        int R = helper(node -> right, maxSum);

        L = max(0, L);
        R = max(0, R);

        int currPath = node -> val + L + R;

        maxSum = max(maxSum, currPath);

        return node -> val + max(L, R);
    }

    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        helper(root, maxSum);
        return maxSum;
    }
};
