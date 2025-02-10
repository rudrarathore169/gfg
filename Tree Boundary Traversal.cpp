class Solution {
    public:
    
      void inserting_leaf_nodes(Node* root, vector<int>& ans) {
        // In-order traversal to capture leaf nodes
        if (root == NULL) {
            return;
        }
        inserting_leaf_nodes(root->left, ans);
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
        }
        inserting_leaf_nodes(root->right, ans);
    }
    
    void left_boundary(Node* root, vector<int>& ans) {
        Node* temp = root->left;
        while (temp) {
            if (temp->left || temp->right) { // Don't include leaf nodes
                ans.push_back(temp->data);
            }
            if (temp->left) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
    }
    
    void right_boundary(Node* root, vector<int>& ans) {
        Node* temp = root->right;
        vector<int> temp_ans;
        while (temp) {
            if (temp->left || temp->right) { // Don't include leaf nodes
                temp_ans.push_back(temp->data);
            }
            if (temp->right) {
                temp = temp->right;
            } else {
                temp = temp->left;
            }
        }
        // Right boundary should be added in reverse order
        for (int i = temp_ans.size() - 1; i >= 0; i--) {
            ans.push_back(temp_ans[i]);
        }
    }
    
    vector<int> boundaryTraversal(Node* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }
    
        // Add root node if it’s not a leaf node
        if (root->left || root->right) {
            ans.push_back(root->data);
        }
    
        // Process left boundary
        left_boundary(root, ans);
    
        // Process all leaf nodes
        inserting_leaf_nodes(root, ans);
    
        // Process right boundary
        right_boundary(root, ans);
    
        return ans;
        }
    };