/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
  
    Node* merge(Node* first, Node* second) {

    if (!first) return second;
    if (!second) return first;

    
    if (first->data > second->data) {
        Node* thrd = first;
        first = second;
        second = thrd;
    }

    Node* res = first;  
    Node* thrd = NULL;

    while (first && second) {

        if (first->bottom && first->bottom->data <= second->data) {
             first = first->bottom;
        } else {
            thrd = second->bottom;
             second->bottom = first->bottom;
            first->bottom = second;
            second = thrd;
             first = first->bottom;
        }
    }

    return res;
}

    Node *flatten(Node *root) {
         if (!root || !root->next) return root;
        Node*temp = root;
        Node* dwn = temp;
        Node* left = temp->next;
        temp->next = NULL;
        left = flatten(left);
        Node* ans = merge(dwn,left);
      
      return ans;
    }
};