
/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int findposition(vector<int> &in,int n, int x){
        for(int i =0;i<n;i++){
            if(in[i]==x){
                return i;
            }
        }
        return -1;
    }
    Node* preorder(vector<int> &in, vector<int> &pre,int& index,int inorderst,int inorderend,int n){
        if(index>=n ||inorderst>inorderend){
            return nullptr;
        }
        
        int element = pre[index++];
        Node* root =  new Node(element);
        int position = findposition(in,n,element);
        
        root->left = preorder(in,pre,index,inorderst,position-1,n);
        root->right = preorder(in,pre,index,position+1,inorderend,n);
        
        return root;
    }
    Node* buildTree(vector<int> &in, vector<int> &pre)
    {   
        int preindex =0;
        int n  = pre.size();
       Node* root= preorder(in,pre,preindex,0,n-1,n);
        return root;
    }
};