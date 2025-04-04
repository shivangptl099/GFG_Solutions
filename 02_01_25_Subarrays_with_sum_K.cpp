class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == k) ans++;
            if(mp.find(sum - k) != mp.end()) ans += mp[sum - k];
            mp[sum]++;
        }
        return ans;
    }
};
