class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        set<char> mySet;
        int ans = INT_MIN, l = 0;
        for(int r = 0; r < s.length(); r++){
            while (mySet.count(s[r])) {
                mySet.erase(s[l]);
                l++;
            }
            mySet.insert(s[r]);
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
