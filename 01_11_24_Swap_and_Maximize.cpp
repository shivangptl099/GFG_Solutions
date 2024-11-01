class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int s = 0, l = arr.size() - 1;
        long long ans = 0;
        bool lol = false;
        while(s < l){
            ans += arr[l] - arr[s];
            if(!lol){
                s++;
                lol = !lol;
            } else {
                l--;
                lol = !lol;
            }
        }
        s = 0;
        ans += arr[l] - arr[s];
        return ans;
    }
};
