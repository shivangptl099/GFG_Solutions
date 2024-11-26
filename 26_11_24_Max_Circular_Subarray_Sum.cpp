class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int mini = INT_MAX, maxi = INT_MIN, curr1 = 0, curr2 = 0, totalSum = 0;
        for(int i = 0; i < arr.size(); i++){
            totalSum += arr[i];
            curr1 += arr[i];
            curr2 += arr[i];
            if(curr1 < 0) curr1 = 0;
            if(curr2 > 0) curr2 = 0;
            maxi = max(maxi, curr1);
            mini = min(mini, curr2);
        }
        return max(maxi, totalSum - mini);
    }
};
