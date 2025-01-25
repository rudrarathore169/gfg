class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {   Node*temp = head;
       map<Node*,bool>visited;
       while(temp!=NULL){
           if(visited[temp] == 1 ){
               return true;
           }
           visited[temp]=1;
           temp = temp->next;
       }
       return false;
    }
};