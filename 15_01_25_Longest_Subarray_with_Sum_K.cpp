class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int ans = 0, sum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(sum == k) ans = max(ans, i + 1);
            if(mp.find(sum) == mp.end()) mp[sum] = i;
            if(mp.find(sum - k) != mp.end()){
                ans = max(ans, i - mp[sum - k]);
            }
        }
        return ans;
    }
};
