class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int s = 0, e = arr.size() - 1, diff = INT_MAX;
        vector<int> ans;
        while(s < e){
            int sum = arr[s] + arr[e];
            if(diff > abs(target - sum)){
                diff = abs(target - sum);
                ans = {arr[s], arr[e]};
            }
            if(sum > target) e--;
            else if(sum < target) s++;
            else return ans;
        }
        return ans;
    }
};
