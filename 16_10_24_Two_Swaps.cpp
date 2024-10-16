class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        int swaps = 0;
        int i = 0;
        while(i < arr.size()){
            if(arr[i] != i + 1){
                swap(arr[i], arr[arr[i] - 1]);
                swaps++;
            } else {
                i++;
            }
            if(swaps > 2) return false;
        }
        return (swaps == 0 || swaps == 2) ? true : false; 
    }
};
