
class Solution {
    public:
      void in(Node* root,unordered_map<int,bool>&v,bool& ans,int& target){
          if(!root){
              return;
          }
          in(root->left,v,ans,target);
          if(v[target-root->data]==true){
              ans = true;
              return ;
          }
          else{
              v[root->data]=true;
          }
          in(root->right,v,ans,target);
      }
      bool findTarget(Node *root, int target) {
          unordered_map<int,bool>visited;
          bool ans = false;
          in(root,visited,ans,target);
          return ans;
      }
  };
  