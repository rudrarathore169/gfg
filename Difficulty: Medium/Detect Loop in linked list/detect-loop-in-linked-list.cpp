/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* slow =head;
        Node* fast = head;
        if(head->next==NULL){
            return false;
        }
        
        while(fast!=nullptr){
            
            
            slow=slow->next;
            if(fast->next){
                fast =fast->next->next;
            }
            else{
                fast = fast->next;
            }
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};