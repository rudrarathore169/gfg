Node* reverseList(Node* head) {
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        num1 = reverseList(num1);
        num2 = reverseList(num2);
        Node* ans = new Node(0);
        Node* temp = ans;
        int sum = 0;

        while (num1 || num2) {
            if (num1) {
                sum += num1->data;
                num1 = num1->next;
            }
            if (num2) {
                sum += num2->data;
                num2 = num2->next;
            }
            temp->next = new Node(sum % 10);
            temp = temp->next;
            sum /= 10;
        }

        if (sum) {
            temp->next = new Node(sum % 10);
        }

        // Reverse the list and remove trailing zeros
        ans = reverseList(ans->next);
        
        // Remove trailing zeros in the reversed list
        while (ans != nullptr && ans->data == 0) {
        Node* temp = ans;
        ans = ans->next;
        delete temp; 
        }
        return ans;
    }
};