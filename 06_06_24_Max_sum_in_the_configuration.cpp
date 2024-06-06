class Solution {
  public:
    long long max_sum(int a[], int n) {
        long long sum = 0, ans = 0, temp = 0;
        for(long long i = 0; i < n; i++){
            sum += a[i];
            temp += (i * a[i]);
        }
        ans = temp;
        for(long long i = 1; i < n; i++){
            temp = temp - sum + (long long)a[i - 1] * n;
            ans = max(ans, temp);
        }
        return ans;
    }
};
