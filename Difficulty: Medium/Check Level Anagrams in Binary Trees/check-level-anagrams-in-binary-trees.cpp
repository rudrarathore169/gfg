/* Structure of binary tree Node
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool areAnagrams(Node* root1, Node* root2) {
        // code here
        if(root1->data!=root2->data){
            return false;
        }
        
        queue<Node*>q1;
        queue<Node*>q2;
        
        q1.push(root1);
        q2.push(root2);
        
        while(!q1.empty()&&!q2.empty()){
            int k1 = q1.size();
            int k2 = q2.size();
            unordered_map<int,int>map1;
            unordered_map<int,int>map2;
            for(int i=0;i<k1;i++){
                Node* t1 = q1.front();
                q1.pop();
                if(t1->left){
                    q1.push(t1->left);
                    map1[t1->left->data]++;
                }
                if(t1->right){
                    q1.push(t1->right);
                    map1[t1->right->data]++;
                }
            }
            for(int i=0;i<k2;i++){
                Node* t1 = q2.front();
                q2.pop();
                if(t1->left){
                    q2.push(t1->left);
                    map2[t1->left->data]++;
                }
                if(t1->right){
                    q2.push(t1->right);
                    map2[t1->right->data]++;
                }
            }
            
            if(map1!=map2){
                return false;
            }
        }
        return true;
        
    }
};
