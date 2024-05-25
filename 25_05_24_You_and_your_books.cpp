class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        long long temp = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > k)
                temp = 0;
            else temp += arr[i];
            ans = max(ans, temp);
        }
        return ans;
    }
};
