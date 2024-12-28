// Optimal Approach
// Time Complexity: O(N^2)
// Space Complexity: O(N^2)

class Solution {
    #define p pair<int, int>
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int n = arr.size();
        unordered_map<int, vector<p>> mp;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                mp[arr[i] + arr[j]].push_back(make_pair(i, j));
            }
        }
        set<vector<int>> mySet;
        for(int i = 0; i < n; i++){
            int req = -arr[i];
            if(mp.find(req) != mp.end()){
                for(auto it : mp[req]){
                    if(i != it.first && i != it.second){
                        vector<int> curr = {i, it.first, it.second};
                        sort(curr.begin(), curr.end());
                        mySet.insert(curr);
                    }
                }
            }
        }
        vector<vector<int>> ans(mySet.begin(), mySet.end());
        return ans;
    }
};

// Brute Force
// Time Complexity: O(N^3)
// Space Complexity: O(1)
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<vector<int>> ans;
        int a, b, c, n = arr.size();
        for(int i = 0; i < n - 2; i++){
            a = arr[i];
            for(int j = i + 1; j < n - 1; j++){
                b = arr[j];
                for(int k = j + 1; k < n; k++){
                    c = arr[k];
                    if(a + b + c == 0){
                        ans.push_back({i, j, k});
                    }
                }
            }
        }
        return ans;
    }
};
