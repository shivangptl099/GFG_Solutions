class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> ans(arr.size());
        int i = arr.size() - 1, j = 0, s = 0, e = 1;
        while(s < arr.size() || e < arr.size()){
            if(s < arr.size()){
                ans[s] = arr[i];
                s += 2;
                i--;
            }
            if(e < arr.size()){
                ans[e] = arr[j];
                e += 2;
                j++;
            }
        }
        return ans;
    }
};
