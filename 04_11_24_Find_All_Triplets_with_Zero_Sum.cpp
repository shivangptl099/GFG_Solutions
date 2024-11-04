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
