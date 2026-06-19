/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* reverseCircular(Node* head) {
        // code here
        if(head->next==nullptr){
            return head;
        }
        
        Node* prev=head;
        Node* curr = head->next;
        while(curr!=head){
            Node* fnext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fnext;
        }
        curr->next = prev;
        return prev;
    }
};