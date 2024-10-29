class Solution {
  public:
    void partition(Node* pivot, Node* &left, Node* &right){
        Node* temp = pivot->next;
        while(temp){
            Node* nxt = temp->next;
            if(temp->data <= pivot->data){
                temp->next = left;
                left = temp;
            } else {
                temp->next = right;
                right = temp;
            }
            temp = nxt;
        }
    }
    
    struct Node* quickSort(struct Node* head) {
        if(!head || !head->next) return head;
        Node* left = NULL, *right = NULL;
        partition(head, left, right);
        left = quickSort(left);
        right = quickSort(right);
        Node* t = left;
        while(t && t->next) t = t->next;
        if(t) t->next = head;
        else left = head;
        head->next = right;
        return left;
    }
};
