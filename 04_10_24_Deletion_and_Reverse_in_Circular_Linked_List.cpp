class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        Node* prev = head;
        Node* curr = head->next, *nxt;
        while(curr != head){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = prev;
        return prev;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        if(head->data == key){
            Node* p = head->next;
            while(p->next != head){
                p = p->next;
            }
            p->next = p->next->next;
            head = p->next;
        } else {
            Node* p = head;
            while(p->next->data != key){
                p = p->next;
                if(p == head) break;
            }
            if(p->next->data == key) p->next = p->next->next;
        }
        return head;
    }
};
