class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int, vector<int>> mp;
        int i = 0;
        while(i < arr.size()){
            if(mp.find(arr[i]) != mp.end()){
                mp[arr[i]].push_back(i);
            } else {
                mp[arr[i]] = {i};
            }
            i++;
        }
        int ans = 0;
        for(auto it : mp){
            if(it.second.size() > 1){
                int temp = it.second[it.second.size() - 1] - it.second[0];
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};
