class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int ans = INT_MIN, product = 1;
        for(int i = 0; i < arr.size(); i++){
            if(product == 0) product = 1;
            product *= arr[i];
            ans = max(ans, product);
        }
        product = 1;
        for(int i = arr.size() - 1; i >= 0; i--){
            if(product == 0) product = 1;
            product *= arr[i];
            ans = max(ans, product);
        }
        return ans;
    }
};
