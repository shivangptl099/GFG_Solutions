class Solution {
  public:
    int countWays(int n) {
        if(n <= 2) return n;
        int a = 1, b = 2;
        int temp = 2, ans;
        while(temp < n){
            ans = a + b;
            temp++;
            a = b;
            b = ans;
        }
        return ans;
    }
};
