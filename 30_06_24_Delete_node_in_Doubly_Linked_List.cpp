class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        struct Node* dummy = new Node(0);
        dummy -> next = head;
        struct Node* p = dummy;
        struct Node* q = head;
        int i = 1;
        while(q){
            if(i == x){
                p -> next = q -> next;
                break;
            }
            i++;
            p = p -> next;
            q = q -> next;
        }
        return dummy -> next;
    }
};
