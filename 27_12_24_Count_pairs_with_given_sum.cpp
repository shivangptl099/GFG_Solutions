class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,  int> mp;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            int req = target - arr[i];
            if(mp.find(req) != mp.end()) ans += mp[req];
            mp[arr[i]]++;
        }
        return ans;
    }
};
