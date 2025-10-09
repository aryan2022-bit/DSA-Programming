class Solution {
public:
    bool helper(TreeNode* node, long long minVal, long long maxVal){
        if(node == NULL) return true;
        if((long long) node -> val <= minVal || (long long) node -> val >= maxVal) return false;

        return helper(node -> left, minVal, (long long) node -> val) && helper(node -> right, (long long) node -> val, maxVal);
    }
    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};
