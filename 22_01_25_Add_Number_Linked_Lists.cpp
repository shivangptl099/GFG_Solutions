class Solution {
  public:
    Node* reverseList(Node* head){
        Node* prev = nullptr;
        Node* curr = head;
        while(curr){
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        Node* n1 = reverseList(num1);
        Node* n2 = reverseList(num2);
        Node* p = new Node(0);
        p->next = nullptr;
        Node* first = p;
        int sum, carry = 0;
        while(n1 || n2){
            Node* temp = new Node(0);
            temp->next = nullptr;
            p->next = temp;
            p = p->next;
            sum = carry;
            if(n1){
                sum += n1->data;
                n1 = n1->next;
            }
            if(n2){
                sum += n2->data;
                n2 = n2->next;   
            }
            carry = sum / 10;
            sum %= 10;
            p->data = sum;
        }
        Node* ans = reverseList(first->next);
        return ans;
    }
};
