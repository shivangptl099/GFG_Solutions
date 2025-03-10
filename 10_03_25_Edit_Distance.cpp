class Solution {
  public:
    // Function to compute the edit distance between two strings
    int dp[1001][1001];
    int solve(string& s1, string& s2, int i, int j){
        //base case
        if(s1.length() == i) return s2.length() - j;
        if(s2.length() == j) return s1.length() - i;
        //recursive case
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i] == s2[j]) return dp[i][j] = solve(s1, s2, i + 1, j + 1);
        else{
            int ins = 1 + solve(s1, s2, i, j + 1);
            int del = 1 + solve(s1, s2, i + 1, j);
            int rep = 1 + solve(s1, s2, i + 1, j + 1);
            return dp[i][j] = min({ins, del, rep});
        }
    }
    int editDistance(string& s1, string& s2) {
        if(s1 == s2) return 0;
        memset(dp, -1, sizeof(dp));
        return solve(s1, s2, 0, 0);
    }
};
