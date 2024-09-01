class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0, sum1 = 0, sum2 = 0, ans = 0;
        int n1 = arr1.size();
        int n2 = arr2.size();
        while(i < n1 && j < n2){
            if(arr1[i] == arr2[j]){
                ans += max(sum1, sum2) + arr1[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
            else if(arr1[i] < arr2[j]){
                sum1 += arr1[i++];
            } else {
                sum2 += arr2[j++];
            }
        }
        while(i < n1) sum1 += arr1[i++];
        while(j < n2) sum2 += arr2[j++];
        ans += max(sum1, sum2);
        return ans;
    }
};
