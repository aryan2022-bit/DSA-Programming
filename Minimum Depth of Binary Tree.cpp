class Solution {
public:
    int minDepth(TreeNode* root) {
        int depth = 0;
       if(root == nullptr) return 0;
       if(root -> left == nullptr && root -> right == nullptr) return 1;

       if(root -> left != nullptr && root -> right != nullptr){
            depth = 1 + min(minDepth(root -> left), minDepth(root -> right));
       }else if(root -> left != nullptr || root -> right != nullptr){
            if(root -> left != nullptr){
                depth = 1 + minDepth(root -> left);
            }else{
                depth = 1 + minDepth(root -> right);
            }
       }

       return depth; 
    }
};
