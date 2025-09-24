class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* node = root;
        vector<int> result;

        while(true){
            if(node != nullptr){
                st.push(node);
                node = node -> left;
            }else{
                if(st.empty()) break;
                node = st.top();
                st.pop();
                result.push_back(node -> val);
                node = node -> right;
            }
        }
        return result;
    }
};
