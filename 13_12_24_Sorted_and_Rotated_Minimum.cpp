class Solution {
  public:
    int findMin(vector<int>& arr) {
        int l = 0, h = arr.size() - 1, mid;
        int ans = arr[0];
        while(l <= h){
            mid = l + ((h - l) / 2);
            ans = min(ans, arr[mid]);
            if(arr[l] <= arr[mid]){
                ans = min(ans, arr[l]);
                l = mid + 1;
            }
            else if(arr[mid] <= arr[h]) h = mid - 1;
        }
        return ans;
    }
};
