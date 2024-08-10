class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        int n = 0;
        struct Node* p = head;
        while(p){
            n++;
            p = p->next;
        }
        if(n == k) return head;
        struct Node* q;
        Node* dummy = new Node(0);
        p = head;
        int i = 1;
        while(i < k){
            i++;
            p = p->next;
        }
        q = p->next;
        dummy->next = q;
        p->next = NULL;
        while(q->next) q = q->next;
        q->next = head;
        return dummy->next;
    }
};
