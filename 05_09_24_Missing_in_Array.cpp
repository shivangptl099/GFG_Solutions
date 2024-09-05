class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        int sum = (n * (n + 1)) / 2;
        int total = 0;
        for(int x : arr){
            total += x;
        }
        return sum - total;
    }
};
