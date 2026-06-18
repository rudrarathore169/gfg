/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        Node* slow =head->next;
        Node* fast =head->next->next;
        if(fast==head){
            head->next=head;
            slow->next = slow;
            return {head,slow};
        }
        
        while(fast->next!=head&& fast->next->next!=head){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* temp = slow->next;
        slow->next =head;
        if(fast->next ==head){
            fast->next=temp;
        }
        else{
            fast->next->next=temp;
        }
        
        return{head,temp};
    }
};