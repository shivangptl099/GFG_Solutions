class Solution {
  public:
    void deleteAlt(struct Node *head) {
        Node* p = head;
        while(p && p->next){
            p->next = p->next->next;
            p = p->next;
        }
    }
};
