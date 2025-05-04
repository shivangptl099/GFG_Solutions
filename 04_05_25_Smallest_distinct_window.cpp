class Solution {
  public:
    int findSubString(string& str) {
        set<char> mySet;
        for(auto c : str){
            mySet.insert(c);
        }
        int n = mySet.size(), ans = str.size();
        int s = 0, e = 0;
        unordered_map<char, int> mp;
        while(e < str.size()){
            mp[str[e]]++;
            while(mp.size() >= n){
                ans = min(ans, e - s + 1);
                mp[str[s]]--;
                if(mp[str[s]] == 0) mp.erase(str[s]);
                s++;
            }
            e++;
        }
        return ans;
    }
};
