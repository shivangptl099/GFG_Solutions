class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        set<int> mySet;
        for(int i = 0; i < k; i++){
            mp[arr[i]]++;
            mySet.insert(arr[i]);
        }
        vector<int> ans;
        ans.push_back(mySet.size());
        for(int i = k; i < arr.size(); i++){
            mp[arr[i - k]]--;
            if(mp[arr[i - k]] == 0) mySet.erase(arr[i - k]);
            mp[arr[i]]++;
            mySet.insert(arr[i]);
            ans.push_back(mySet.size());
        }
        return ans;
    }
};
