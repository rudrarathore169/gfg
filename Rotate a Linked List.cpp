class Solution {
  public:
    Node* rotate(Node* head, int k) {
       int size=1;
       Node* temp =head;
       
       while(temp->next){
           temp = temp->next;
           size++;
       }
       k = k%size;
       
       while(k){
           Node* first = head;
           head=head->next;
           first->next =NULL;
           temp->next =first;
           temp = temp->next;
           k--;
       }
      
      return head;
    }
};