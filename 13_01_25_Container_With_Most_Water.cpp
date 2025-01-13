class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size(), ans = 0;
        int s = 0, e = n - 1;
        while(s < e){
            ans = max(ans, (min(arr[s], arr[e]) * (e - s)));
            if(arr[s] <= arr[e]) s++;
            else e--;
        }
        return ans;
    }
};
