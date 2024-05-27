class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        vector<int> arr(n);
        arr[0] = 1;
        int ans = arr[0];
        for(int i = 1; i < n; i++){
            arr[i] = 1;
            for(int j = 0; j < n; j++)
                if(abs(a[i] - a[j]) == 1)
                    arr[i] = max(arr[i], arr[j] + 1);
        ans = max(ans, arr[i]);
        }
        return ans;
    }
};
