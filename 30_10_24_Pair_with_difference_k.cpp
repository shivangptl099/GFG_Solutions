class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int x : arr) mp[x]++;
        int ans = 0;
        for(int x : arr){
            ans += mp[x + k];
        }
        return ans;
    }
};
