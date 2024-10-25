class Solution {
  public:
    int count(struct Node* head, int key) {
        Node* p = head;
        int ans = 0;
        while(p){
            if(p->data == key) ans++;
            p = p->next;
        }
        return ans;
    }
};
