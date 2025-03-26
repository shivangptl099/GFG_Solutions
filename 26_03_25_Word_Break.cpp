class Solution {
  public:
    bool solve(string &s, set<string> mySet, int i, vector<int> &dp){
        if(i == s.size()) return dp[i] =  1;
        if(dp[i] != -1) return dp[i];
        string temp = "";
        for(int j = i; j < s.size(); j++){
            temp += s[j];
            if(mySet.find(temp) != mySet.end()){
                if(solve(s, mySet, j + 1, dp)) return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }
    bool wordBreak(string &s, vector<string> &dictionary) {
        int n = s.size();
        set<string> mySet;
        vector<int> dp(n + 1, -1);
        for(auto it : dictionary) mySet.insert(it);
        return solve(s, mySet, 0, dp);
    }
};
