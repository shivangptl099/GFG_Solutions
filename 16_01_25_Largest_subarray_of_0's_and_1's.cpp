class Solution {
  public:
    int maxLen(vector<int> &arr) {
        int ans = 0, sum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++){
            sum += (arr[i] == 0) ? -1 : 1;
            if(sum == 0) ans = max(ans, i + 1);
            if(mp.find(sum) == mp.end()) mp[sum] = i;
            else ans = max(ans, i - mp[sum]);
        }
        return ans;
    }
};
