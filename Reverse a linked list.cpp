class Solution {
  public:
    Node* reverseList(struct Node* head) {
        
        Node* curr=head;
        Node* prev = NULL;
        while(curr!=NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
};