class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
    Node* head =NULL;
    Node* tail = NULL;
    myQueue() {
       
        
    }

    bool isEmpty() {
        // check if the queue is empty
        if(!head){
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        
        if(!head){
            head = new Node(x);
            tail =head;
        }
        else{
            Node* n = new Node(x);
        tail->next = n;
        tail = tail->next;
        }
        
        
    }

    void dequeue() {
    if (!head) return;

    Node* temp = head;
    head = head->next;
    delete temp;

    if (!head)  
        tail = NULL;
}

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(head){
            return head->data;
        }
        return -1;
    }

    int size() {
        // Returns the current size of the queue.
        if(!head){
            return 0;
        }
        int cnt=1;
        Node* temp = head;
        while(temp!=tail){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
};
