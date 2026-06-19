

class twoStacks {
  public:
int top1=-1;
int top2 = 100;
int size = 100;
int arr[100];
    twoStacks() {}

    // Function to push an integer into the stack1.
    void push1(int x) {
        if(top2-top1>1){
            arr[++top1]=x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if(top2-top1>1){
            arr[--top2]=x;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(top1==-1){
            return -1;
        }
        else{
            int ans = arr[top1];
            top1--;
            return ans;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
          if(top2==100){
            return -1;
        }
        else{
            int ans = arr[top2];
            top2++;
            return ans;
        }
    }
};

