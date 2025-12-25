class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr) return new TreeNode(val);

        TreeNode* curr = root;
        TreeNode* parent = nullptr;

        while(curr != nullptr){
            parent = curr;
            if(curr -> val > val){
                curr = curr -> left;
            }else{
                curr = curr -> right;
            }
        }

        TreeNode* newNode = new TreeNode(val);
        if(parent -> val > val){
            parent -> left = newNode;
        }else{
            parent -> right = newNode;
        }

        return root;
    }
};
