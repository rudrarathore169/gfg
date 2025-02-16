
class Solution {
    public:
        // Return the Kth smallest element in the given BST
        int kthSmallest(Node *root, int k) {
            int count = 0;
            Node* temp = root;
            
            while (temp) {
                if (temp->left) {
                    Node* pred = temp->left;
                    while (pred->right && pred->right != temp) {
                        pred = pred->right;
                    }
    
                    if (!pred->right) {
    
                        pred->right = temp;
                        temp = temp->left;
                    } else {
                     
                        pred->right = NULL;
                        count++;
                        if (count == k) {
                            return temp->data;
                        }
                        temp = temp->right;
                    }
                } else {
                   
                    count++;
                    if (count == k) {
                        return temp->data;
                    }
                    temp = temp->right;  
                }
            }
            return -1;  
        }
    };