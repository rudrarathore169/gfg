/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* insertAtBeginning(Node* tail, int key) {
        // code here
        Node* head = tail->next;
        Node* newNode = new Node(key);
        tail->next=newNode;
        newNode->next = head;
        return newNode;
    }
};