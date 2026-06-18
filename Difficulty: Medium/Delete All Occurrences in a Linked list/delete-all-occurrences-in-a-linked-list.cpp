/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
   
    Node* deleteAllOccurances(Node* head, int x) {
        // code here
       Node* temp = head;
       
       while(temp->next){
           if(temp->next->data==x){
               temp->next = temp->next->next;
           }
           else{
               temp= temp->next;
           }
           
       }
       if(head->data==x){
           return head->next;
       }
        return head;
        
    }
};