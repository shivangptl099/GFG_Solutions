class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] == 0) continue;
            if(arr[i] == arr[i + 1]){
                arr[i] = 2 * arr[i];
                arr[i + 1] = 0;
                i++;
            }
        }
        vector<int> temp;
        for(int x : arr){
            if(x != 0) temp.push_back(x);
        }
        int i = 0;
        while(i < temp.size()){
            arr[i] = temp[i];
            i++;
        }
        while(i < arr.size()){
            arr[i] = 0;
            i++;
        }
        return arr;
    }
};
