class Solution {
public:
    void inOrder(TreeNode* root, vector<int> &result){
        if(root == nullptr) return;

        inOrder(root -> left, result);
        result.push_back(root -> val);
        inOrder(root -> right, result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inOrder(root, result);
        return result;
    }
};
