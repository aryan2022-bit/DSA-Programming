class Solution {
public:
    bool isMirror(TreeNode* a, TreeNode* b){
        if(a == nullptr && b == nullptr) return true;
        if(a == nullptr || b == nullptr) return false;
        if(a -> val != b -> val) return false;

        return isMirror(a -> right, b -> left) && isMirror(a -> left, b -> right);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isMirror(root -> left, root -> right);
    }
};
