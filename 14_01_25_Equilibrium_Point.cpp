class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int leftSum = arr[0], rightSum = 0;
        for(int x : arr) rightSum += x;
        rightSum -= (arr[0] + arr[1]);
        for(int i = 1; i < arr.size() - 1; i++){
            if(leftSum == rightSum) return i;
            leftSum += arr[i];
            rightSum -= arr[i + 1];
        }
        return -1;
    }
};
