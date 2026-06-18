/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class myStack {
    Node* head = NULL;
  public:
    myStack() {
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the stack is empty
        if(head==NULL){
            return true;
        }
        return false;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        if(!head){
            head = new Node(x);
        }
        else{
            Node* n = new Node(x);
            n->next = head;
            head = n;
        }
    }

    void pop() {
        // Removes the top element of the stack
        if(head==NULL){
            return ;
        }
        
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(!head){
            return -1;
        }
        return head->data;
    }

    int size() {
        // Returns the current size of the stack.
        int cnt=0;
        Node* temp = head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
};