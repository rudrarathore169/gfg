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
    int count(Node* head, int key) {
        int cnt=0;
        while(head){
            if(head->data==key){
                cnt++;
            }
            head = head->next;
        }
        return cnt;
    }
};