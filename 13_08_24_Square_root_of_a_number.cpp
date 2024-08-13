class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long int temp = 1;
        long long int ans = 1;
        while(1){
            temp = ans * ans;
            if(temp > n) return ans - 1;
            ans++;
        }
        return ans;
    }
};
