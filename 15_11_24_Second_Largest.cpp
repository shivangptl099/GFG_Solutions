class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int largest = 0;
        for(int x : arr) largest = max(largest, x);
        int ans = -1;
        for(int x : arr) if(x != largest) ans = max(ans, x);
        return ans;
    }
};
