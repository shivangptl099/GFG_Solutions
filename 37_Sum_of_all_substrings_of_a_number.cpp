class Solution
{
    public:
    long long sumSubstrings(string s){
        const int MOD = 1e9 + 7;
        long long sum = 0;
        int len = s.length();
        long long multiplier = 1;
        for (int i = len - 1; i >= 0; i--) {
            long long digit = s[i] - '0';
            sum = (sum + digit * multiplier * (i + 1)) % MOD;
            multiplier = (multiplier * 10 + 1) % MOD;
        }
        return sum;
    }
};
