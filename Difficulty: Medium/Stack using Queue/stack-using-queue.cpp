class myStack {
    queue<int> q;

  public:
    queue<int>q1;
    queue<int>q2;
    void push(int x) {
        // Inserts an element x at the top of the stack
        q1.push(x);
        
    }

    void pop() {
        // Removes an element from the top of the stack
        int top=-1;
        while(!q1.empty()){
            top = q1.front();
            q1.pop();
            if(!q1.empty()){
                q2.push(top);
            }
        }
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
       
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(q1.empty()){
            return -1;
        }
         int top=-1;
        while(!q1.empty()){
            top = q1.front();
            q1.pop();
                q2.push(top);
            
        }
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return top;
    }

    int size() {
        // Returns the current size of the stack
        return q1.size();
    }
};
