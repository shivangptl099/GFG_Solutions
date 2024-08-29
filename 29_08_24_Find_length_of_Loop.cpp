class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* r = head;
        Node* t = head;
        int ans = 0;
        while(r && r->next){
            r = r->next->next;
            t = t->next;
            if(r == t){
                r = r->next;
                while(r != t){
                    r = r->next;
                    ans++;
                }
                ans++;
                break;
            }
        }
        return ans;
    }
};
