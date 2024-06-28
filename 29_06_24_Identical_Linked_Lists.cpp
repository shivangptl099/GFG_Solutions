bool areIdentical(struct Node *head1, struct Node *head2) {
    struct Node* p = head1;
    struct Node* q = head2;
    while(p && q){
        if(p -> data != q -> data) return false;
        p = p -> next;
        q = q -> next;
    }
    if(p || q) return false;
    return true;
}
