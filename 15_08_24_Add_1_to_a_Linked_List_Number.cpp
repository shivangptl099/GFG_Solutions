class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        vector<int> arr;
        Node* p = head;
        while(p){
            arr.push_back(p->data);
            p = p->next;
        }
        int carry = 1, sum = 0;
        int i = arr.size() - 1;
        while(i >= 0){
            if(carry == 0) break;
            else{
                sum = (arr[i] + carry);
                carry = sum / 10;
                arr[i] = sum % 10;
            }
            i--;
        }
        p = head;
        i = 0;
        while(p){
            p->data = arr[i++];
            p = p->next;
        }
        Node* first = new Node(1);
        if(carry != 0){
            first->next = head;
            return first;
        }
        return head;
    }
};
