class Solution {
public:
    bool isIdentical(TreeNode* s, TreeNode* t){
        if(s == nullptr && t == nullptr) return true;
        if(s == nullptr || t == nullptr) return false;
        if(s -> val != t -> val) return false;

        return isIdentical(s -> left, t -> left) && isIdentical(s -> right, t -> right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr) return true;
        if(root == nullptr) return false;
        if(isIdentical(root, subRoot)) return true;

        return isSubtree(root -> left, subRoot) || isSubtree(root -> right, subRoot);
    }
};
