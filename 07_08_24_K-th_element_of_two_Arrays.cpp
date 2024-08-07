class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        vector<int> temp;
        for(int x : arr1){
            temp.push_back(x);
        }
        for(int x : arr2){
            temp.push_back(x);
        }
        sort(temp.begin(), temp.end());
        return temp[k - 1];
    }
};
