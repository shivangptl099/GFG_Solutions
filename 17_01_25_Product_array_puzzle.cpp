class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int zeroCount = 0, prod = 1;
        for(int x : arr){
            if(x == 0) zeroCount++;
            else prod *= x;
        }
        vector<int> ans(arr.size());
        if(zeroCount == 1){
            for(int i = 0; i < arr.size(); i++){
                if(arr[i] == 0) ans[i] = prod;
                else ans[i] = 0;
            }
        }
        else if(zeroCount == 0){
            for(int i = 0; i < arr.size(); i++){
                ans[i] = prod / arr[i];
            }
        }
        return ans;
    }
};
