class Solution {
  public:
    Node* segregate(Node* head) {
        int zeros = 0, ones = 0, twos = 0, n = 0;
        Node* temp = head;
        while(temp){
            if(temp->data == 0) zeros++;
            else if(temp->data == 1) ones++;
            else twos++;
            n++;
            temp = temp->next;
        }
        int count = 0;
        temp = head;
        while(count < n){
            if(zeros > 0){
                temp->data = 0;
                zeros--;
            }
            else if(ones > 0){
                temp->data = 1;
                ones--;
            } else {
                temp->data = 2;
                twos--;
            }
            temp = temp->next;
            count++;
        }
        return head;
    }
};
