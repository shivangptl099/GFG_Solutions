class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        set<int> mySet;
        Node* p = head2;
        while(p){
            mySet.insert(p -> data);
            p = p -> next;
        }
        int ans = 0;
        p = head1;
        while(p){
            if(mySet.find(x - (p -> data)) != mySet.end()) ans++;
            p = p -> next;
        }
        return ans;
    }
};
