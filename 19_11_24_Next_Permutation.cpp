class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int r = arr.size() - 2;
        while(r >= 0 && arr[r] >= arr[r + 1]){
            r--;
        }
        if(r < 0){
            reverse(arr.begin(), arr.end());
            return;
        }
        int index = r;
        r = arr.size() - 1;
        while(r > index && arr[r] <= arr[index]) r--;
        swap(arr[index], arr[r]);
        reverse(arr.begin() + index + 1, arr.end());
    }
};
