class Solution {
  public:
    int Maximize(vector<int> arr) {
        sort(arr.begin(), arr.end());
        long long ans = 0;
        long long MOD = 1e9 + 7;
        for(int i = 0; i < arr.size(); i++){
            ans += 1LL * i * arr[i];
            ans %= MOD;
        }
        return ans;
    }
};
