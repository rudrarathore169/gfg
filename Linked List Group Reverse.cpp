class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) { 
       if(head==NULL){
           return NULL;
       }
       
       Node* prev =NULL;
       Node*curr = head;
       Node*next=NULL;
       int count = 0;
       while(curr!=NULL&& count <k){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
           count++;
       }
       if(next!=NULL){
          head->next = reverseKGroup(next,k);
       }
       return prev;}
};