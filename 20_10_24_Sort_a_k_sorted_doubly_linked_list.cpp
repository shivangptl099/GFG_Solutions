class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        auto cmp = [](DLLNode* a, DLLNode* b) {return a->data > b->data;};
        priority_queue<DLLNode*, vector<DLLNode*>, decltype(cmp)> pq(cmp);
        DLLNode* curr = head;
        for(int i = 0; i <= k && curr != NULL; i++){
            pq.push(curr);
            curr = curr->next;
        }
        DLLNode* newHead = NULL;
        DLLNode* tail = NULL;
        while(!pq.empty()){
            if(newHead == NULL){
                newHead = pq.top();
                newHead->prev = NULL;
                tail = newHead;
            } else {
                tail->next = pq.top();
                pq.top()->prev = tail;
                tail = tail->next;
            }
            pq.pop();
            if(curr != NULL){
                pq.push(curr);
                curr = curr->next;
            }
        }
        tail->next = NULL;
        return newHead;
    }
};
