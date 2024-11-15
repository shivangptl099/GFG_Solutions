class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                arr[j++] = arr[i];
            }
        }
        while(j < n){
            arr[j++] = 0;
        }
    }
};
