class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int ans = 0, n = arr.size();
        for(int i = 0; i < n - 2; i++){
            int l = i + 1, r = n - 1;
            while(l < r){
                int sum = arr[i] + arr[l] + arr[r];
                if(sum > target) r--;
                else if(sum < target) l++;
                else {
                    ans++;
                    int temp = l + 1;
                    while(arr[temp] == arr[l] && temp < r){
                        ans++;
                        temp++;
                    }
                    r--;
                }
            }
        }
        return ans;
    }
};
