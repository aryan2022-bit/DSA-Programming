class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return nullptr;
        queue<Node*> lev;
        lev.push(root);

        while(!lev.empty()){
            int size = lev.size();

            for(int i = 0; i < size; i++){
                Node* node = lev.front(); lev.pop();

                if(i == size - 1){
                    node -> next = nullptr;
                }else{
                    node -> next = lev.front();
                }

                if(node -> left) lev.push(node -> left);
                if(node -> right) lev.push(node -> right);
            }
        }
        return root;
    }
};
