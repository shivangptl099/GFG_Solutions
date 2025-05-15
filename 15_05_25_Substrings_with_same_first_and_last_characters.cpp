class Solution {
  public:
    int countSubstring(string &s) {
        int ans = s.size();
        unordered_map<char, int> mp;
        for(char c : s){
            if(mp.find(c) != mp.end()) ans += mp[c];
            mp[c]++;
        }
        return ans;
    }
};
