class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        int ans = 0;
        Node* p = head;
        while(p){
            ans++;
            p = p->next;
        }
        return ans;
    }
};
