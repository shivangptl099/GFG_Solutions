class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        int ans = INT_MIN;
        for(int x : arr){
            ans = max(ans, x);
        }
        return ans;
    }
};
