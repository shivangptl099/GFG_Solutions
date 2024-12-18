class Solution {
  public:
    bool check(vector<int> &arr, int k, int mid){
        int students = 1, sum = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > mid) return false;
            if(sum + arr[i] > mid){
                sum = arr[i];
                students++;
            } else {
                sum += arr[i];
            }
        }
        return (students <= k) ? true : false;
    }
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size()) return -1;
        int l = 0, h = 0;
        for(auto el : arr) h += el;
        int ans = -1;
        while(l <= h){
            int mid = l + (h - l) / 2;
            if(check(arr, k, mid)){
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
