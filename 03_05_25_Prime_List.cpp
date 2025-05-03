class Solution {
  public:
    bool prime(int n){
        if(n <= 1) return false;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    
    int nearest_prime(int n){
        if(prime(n)) return n;
        int prev = n - 1;
        int next = n + 1;
        while(true){
            if(prime(prev)) return prev;
            if(prime(next)) return next;
            prev--;
            next++;
        }
    }
    
    Node *primeList(Node *head) {
        Node *temp = head;
        while(temp){
            temp->val = nearest_prime(temp->val);
            temp = temp->next;
        }
        return head;
    }
};
