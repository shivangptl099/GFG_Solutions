class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    struct Node *sortDoubly(struct Node *head) {
        Node* p = head;
        vector<int> arr;
        while(p){
            arr.push_back(p->data);            
            p=p->next;
        }
        sort(arr.begin(), arr.end());
        p = head;
        int n = arr.size();
        int i = 0;
        while(p){
            p->data = arr[i];
            p=p->next;
            i++;
        }
        return head;
    }
};
