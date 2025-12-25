class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        queue<TreeNode*> mirror;
        mirror.push(root -> left);
        mirror.push(root -> right);

        while(!mirror.empty()){
            TreeNode* a = mirror.front();
            mirror.pop();
            TreeNode* b = mirror.front();
            mirror.pop();

            if(a == nullptr && b == nullptr) continue;
            if(a == nullptr || b == nullptr) return false;
            if(a -> val != b -> val) return false;

            mirror.push(a -> left);
            mirror.push(b -> right);
            mirror.push(a -> right);
            mirror.push(b -> left);
        }
        return true;
    }
};
