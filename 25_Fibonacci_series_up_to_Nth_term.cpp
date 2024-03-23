class Solution {
  public:
    vector<int> Series(int n) {
        vector<int> ans;
        int mod = 1e9 + 7;
        ans.push_back(0);
        ans.push_back(1);
        long long sum = 0;
        for(int i = 2; i <= n; i++){
            sum = ans[i - 1] + ans[i - 2];
            sum %= mod;
            ans.push_back(sum);
        }
        return ans;
    }
};
