class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(!head)
        return ;
        else if(head==head->next){
            head->next=NULL;
            return;
        }
        map<Node*,bool> visited;
        while(head!=NULL){
            if(visited[head->next]==1){
                head->next=NULL;
            }
            visited[head]=1;
            head=head->next;
        }
    }
};