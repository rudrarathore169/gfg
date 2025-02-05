class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>>ans;
        queue<Node*>q;
        vector<int>t;
        t.push_back(root->data);
        ans.push_back(t);
        q.push(root);
       
        while(!q.empty()){
             vector<int>temp;
            Node*front=q.front();
            q.pop();
            if(front->left!=NULL){
                q.push(front->left);
                temp.push_back(front->left->data);
            }
            if(front->right!=NULL){
                q.push(front->right);
                temp.push_back(front->right->data);
            }
            if(temp.size()>0){
              ans.push_back(temp);
            }
           
            
        }
        return ans;
    }
};