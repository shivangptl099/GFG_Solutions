class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0) return head;
        Node *last = head;
        int n = 1;
        while(last->next){
            n++;
            last = last->next;
        }
        k %= n;
        if(k == 0) return head;
        Node *p = head;
        for(int i = 1; i < k; i++) p = p->next;
        Node* start = p->next;
        p->next = nullptr;
        last->next = head;
        return start;
    }
};
