class Solution {
public:
    int helper(TreeNode* node, int k, int &cnt){
        if(!node) return 0;

        int left = helper(node -> left, k, cnt);
        if(left != 0) return left;

        cnt++;
        if(cnt == k) return node -> val;

        return helper(node -> right, k, cnt);
    }

    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        return helper(root, k, cnt);
    }
};
