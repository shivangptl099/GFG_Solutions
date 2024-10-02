class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        int k = 1;
        while(arr.size() > 1){
            arr.insert(arr.begin(), arr.back());
            arr.pop_back();
            if(k > arr.size()){
                arr.erase(arr.begin());
            } else {
                arr.erase(arr.end() - k);
            }
            k++;
        }
        return arr[0];
    }
};
