class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long ans = 0;
        int curr = 0;
        unordered_map<int, int> mp;
        for(int el : arr){
            curr ^= el;
            if(curr == k) ans++;
            if(mp.find(curr ^ k) != mp.end()) ans += mp[curr ^ k];
            mp[curr]++;
        }
        return ans;
    }
};
