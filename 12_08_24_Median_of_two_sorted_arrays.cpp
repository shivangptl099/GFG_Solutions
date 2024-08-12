class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0;
        int count = 0;
        int n = arr1.size();
        int ans = 0, temp = 0;
        while(count <= n + 1){
            count++;
            if(arr1[i] < arr2[j]){
                temp = arr1[i];
                i++;
            } else {
                temp = arr2[j];
                j++;
            }
            if(count == n || count == n + 1) ans += temp;
        }
        return ans;
    }
};
