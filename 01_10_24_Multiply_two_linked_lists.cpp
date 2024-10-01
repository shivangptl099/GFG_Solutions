class solution {
  private:
    long long mod = 1e9 + 7;
  public:
    long long linkedListToInt(Node* node){
        long long n = 0;
        while(node){
            n = ((n * 10) + node->data) % mod;
            node = node->next;
        }
        return n;
    }
    
    long long multiplyTwoLists(Node *first, Node *second) {
        long long n1 = linkedListToInt(first);
        long long n2 = linkedListToInt(second);
        return (n1 * n2) % mod;
    }
};
