class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long int total = 1;
        int zeros = 0;
        int zero_index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
                zero_index = i;
            } else {
                total *= nums[i];
            }
        }
        vector<long long int> ans(nums.size(), 0);
        if(zeros > 1){
            return ans;
        }
        else if(zeros == 1){
            for(int i = 0; i < nums.size(); i++){
                ans[zero_index] = total;
            }
        } else {
            for(int i = 0; i < nums.size(); i++){
                ans[i] = total / nums[i];
            }
        }
        return ans;
    }
};
