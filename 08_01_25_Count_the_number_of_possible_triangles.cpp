class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        int ans = 0, n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i = n - 1; i >= 2; i--){
            int j = 0, k = i - 1;
            while(j < k){
                if(arr[j] + arr[k] > arr[i]){
                    ans += k - j;
                    k--;
                }
                else j++;
            }
        }
        return ans;
    }
};
