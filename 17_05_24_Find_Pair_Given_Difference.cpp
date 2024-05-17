class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            int target = x + arr[i];
            int l = i + 1;
            int h = n - 1;
            while(l <= h){
                int mid = l + ((h - l)/2);
                if(arr[mid] == target) return 1;
                else if(arr[mid] < target) l = mid + 1;
                else h = mid - 1;
            }
        }
        return -1;
    }
};
