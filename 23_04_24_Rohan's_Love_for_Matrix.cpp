class Solution {
  public:
    int firstElement(int n) {
        if(n == 0 || n == 1) return 1;
        int mod = 1000000007;
        int a = 1, b = 1, c;
        for(int i = 2; i < n; i++){
            c = (a + b) % mod;
            a = b % mod;
            b = c % mod;
        }
        return c;
    }
};
