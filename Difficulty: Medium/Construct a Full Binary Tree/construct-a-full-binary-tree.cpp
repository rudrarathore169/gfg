/* Structure of Binary Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    Node *constructBinaryTree(vector<int> &pre, vector<int> &preMirror) {
        // code here
        Node* curr = new Node(pre[0]);
        
        if(pre.size()==1){
            return curr;
        }
        
        vector<int>npr;
        vector<int>npm;
        vector<int>knpr;
        vector<int>knpm;
        
        int snpr = preMirror[1];
        int snpm = pre[1];
        bool flag = 0;
        for(int i=1;i<pre.size();i++){
            if(pre[i]==snpr){
                flag=1;
            }
            
            flag?knpr.push_back(pre[i]):npr.push_back(pre[i]);
        }
        flag=0;
        for(int i=1;i<preMirror.size();i++){
            if(preMirror[i]==snpm){
                flag=1;
            }
            
            flag?knpm.push_back(preMirror[i]):npm.push_back(preMirror[i]);
        }
        curr->left=constructBinaryTree(npr,knpm);
        curr->right = constructBinaryTree(knpr,npm);
        return curr;
    }
};