class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        unordered_map<int,int> mp;
        int ans = 0, sum = 0;
        for(int x : arr){
            sum += x;
            if(sum == tar) ans++;
            if(mp.find(sum - tar) != mp.end()) ans += mp[sum - tar];
            mp[sum]++;
        }
        return ans;
    }
};
