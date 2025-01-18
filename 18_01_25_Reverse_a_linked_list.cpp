class Solution {
  public:
    Node* reverseList(struct Node* head) {
        if(!head) return head;
        Node *prev = nullptr, *curr = head;
        while(curr){
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
};
