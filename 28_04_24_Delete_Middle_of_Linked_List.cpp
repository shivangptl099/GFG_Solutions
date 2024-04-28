class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* slow = dummy;
        Node* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};
