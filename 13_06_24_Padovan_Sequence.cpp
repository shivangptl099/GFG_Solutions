class Solution
{
    public:
    int padovanSequence(int n)
    {
       const int MOD = 1e9 + 7;
       if(n < 3) return 1;
       vector<int> ans(n + 1, 1);
       for(int i = 3; i <= n; i++)
           ans[i] = (ans[i - 2] + ans[i - 3]) % MOD;
       return ans[n];
    }
};
