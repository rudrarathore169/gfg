class Solution {
    public:
        // Function to serialize a tree and return a list containing nodes of tree.
        void serializeHelper(Node* root, vector<int>& ans) {
            if (!root) {
                ans.push_back(-1); // Using -1 as a null marker
                return;
            }
            ans.push_back(root->data);
            serializeHelper(root->left, ans);
            serializeHelper(root->right, ans);
        }
        
        vector<int> serialize(Node *root) {
            vector<int> ans;
            serializeHelper(root, ans);
            return ans;
        }
    
        // Function to deserialize a list and construct the tree.
        Node* deserializeHelper(vector<int> &arr, int &index) {
            if (index >= arr.size() || arr[index] == -1) {
                index++;
                return NULL;
            }
    
            Node* root = new Node(arr[index++]);
            root->left = deserializeHelper(arr, index);
            root->right = deserializeHelper(arr, index);
            return root;
        }
        
        Node* deSerialize(vector<int> &arr) {
            int index = 0;
            return deserializeHelper(arr, index);
        }
    };
    