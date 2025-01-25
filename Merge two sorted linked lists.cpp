class Solution {
  public:
  Node* merge(Node* head1,Node* head2){
      Node* prev = head1;
      Node* curr1 = head1->next;
      Node* curr2 = head2;
      while(curr1&&curr2){
          if(curr2->data<curr1->data){
              Node* carry =  curr2->next;
              prev->next = curr2;
              curr2->next= curr1;
              curr2 = carry;
              prev = prev->next;
          }
          else{
              prev = prev->next;
              curr1 = curr1->next;
          }
      }
      if(curr1){
          prev->next = curr1;
      }
      if(curr2){
          prev->next = curr2;
      }
      return head1;
  }
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1->data<head2->data){
            return merge(head1,head2);
            
        }
        else{
            return merge(head2,head1);
           
        }
        
    }
};