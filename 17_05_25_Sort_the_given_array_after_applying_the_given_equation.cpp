class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        vector<int> ans;
        for(int x : arr){
            int eqn = (A * x * x) + (B * x) + C;
            ans.push_back(eqn);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
