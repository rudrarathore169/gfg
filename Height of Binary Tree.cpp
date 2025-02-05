class Solution {
  public:
    // Function to find the height of a binary tree.
   
    int height(Node* node) {
       if (node == NULL) return -1;
        
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        
        return max(leftHeight, rightHeight)+1;
    }
};