class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        Node *p = *head;
        int ans = 0;
        while(p){
            ans++;
            p = p->next;
        }
        return (ans % 2 == 0) ? true : false;
    }
};
