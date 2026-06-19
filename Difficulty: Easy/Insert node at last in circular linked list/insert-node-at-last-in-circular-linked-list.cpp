/*// creating struct Node
struct Node
{
    int data;
    Node *next;

};*/
Node* insert_at_end(Node* head, int x) {
    // your code here
    
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = new Node;
    temp->next->data = x;
    temp->next->next=head;
    return head;
}