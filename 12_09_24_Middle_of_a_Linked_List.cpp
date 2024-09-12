class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        Node* p = head;
        Node* q = head;
        while(q && q->next){
            p = p->next;
            q = q->next->next;
        }
        return p->data;
    }
};
