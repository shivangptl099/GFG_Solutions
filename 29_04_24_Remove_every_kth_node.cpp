class Solution {
    public:
    Node* deleteK(Node *head,int K){
      if(K == 1) return nullptr;
      Node* dummy = new Node(0);
      dummy->next = head;
      Node* p = head;
      Node* q = dummy;
      int i = 1;
      while(p){
        if(i % K == 0){
            q->next = p->next;
            q = p;
        } 
        else q = q->next;   
        p = p->next;
        i++;
      }
      return dummy->next;
    }
};
