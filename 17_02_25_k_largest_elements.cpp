class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int i = arr.size() - 1;
        while(k--) ans.push_back(arr[i--]);
        return ans;
    }
};
