class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans = 0;
        int i = 0;
        while(i < arr.size()){
            ans += arr[i] / k;
            if(arr[i] % k != 0) ans++;
            i++;
        }
        return ans;
    }
};
