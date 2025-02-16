class Solution {
    public:
      // Function to check whether a Binary Tree is BST or not.
      void in(Node* root , vector<int>&inorder){
          if(root==NULL){
              return;
          }
          in(root->left,inorder);
          inorder.push_back(root->data);
          in(root->right,inorder);
      }
      bool isBST(Node* root) {
          vector<int>inorder;
          in(root,inorder);
          for(int i=0;i<inorder.size()-1;i++){
              if(inorder[i]>inorder[i+1]){
                  return false;
              }
          }
          return true;
      }
  };