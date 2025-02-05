class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> finddiameter(Node* root){
        if(root==NULL){
            pair<int,int> p  = make_pair(0,0);
            return p;
        }
        pair<int,int> p ;
        
        pair<int,int> left = finddiameter(root->left);
        pair<int,int> right = finddiameter(root->right);
        
        if(left.first>right.first &&left.first>left.second+right.second+1 ){
            p.first = left.first;
        }
        else if(right.first>left.second+right.second+1 ){
            p.first = right.first;
        }
        else{
            p.first = left.second+right.second+1;
        }
        
        p.second = max(left.second,right.second)+1;
        return p;
        
    }
    int diameter(Node* root) {
      return finddiameter(root).first-1;
    }
};