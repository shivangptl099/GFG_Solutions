class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int ones = 0;
        int zeros, i, n = arr.size();
        for(i = 0; i < n; i++){
            if(arr[i] == 1){
                ones++;
            }
        }
        zeros = n - ones;
        for(i = 0; i < zeros; i++){
            arr[i] = 0;
        }
        for(i; i < n; i++){
            arr[i] = 1;
        }
    }
};
