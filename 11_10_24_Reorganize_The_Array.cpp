class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        for(int x : arr){
            if(x >= 0 && x < n) mp[x]++;   
        }
        int i = 0;
        vector<int> ans(n, -1);
        for(int i = 0; i < n; i++){
            if(mp.find(i) != mp.end()) ans[i] = i;
        }
        return ans;
    }
};
