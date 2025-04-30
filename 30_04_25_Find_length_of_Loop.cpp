class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                int ans = 1;
                Node* temp = slow;
                temp = temp->next;
                while(slow != temp){
                    ans++;
                    temp=temp->next;
                }
                return ans;
            }
        }
        return 0;
    }
};
