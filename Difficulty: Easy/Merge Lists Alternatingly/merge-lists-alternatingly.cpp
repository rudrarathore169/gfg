/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    vector<Node *> mergeList(Node *head1, Node *head2) {
        // code Here
        Node* temp1=head1;
        Node* temp2 = head2;
        while(temp1&&temp2){
            Node* temp3 = temp1->next;
            temp1->next = temp2;
            temp2 = temp2->next;
            temp1->next->next =  temp3;
            temp1 = temp3;
        }
        
        return {head1,temp2};
    }
};