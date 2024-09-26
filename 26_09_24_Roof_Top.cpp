class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int ans = 0, c = 0, i = 0;
        while(i < arr.size() - 1){
            if(arr[i + 1] > arr[i]){
                c++;
            } else {
                ans = max(ans, c);
                c = 0;
            }
            i++;
        }
        ans = max(ans, c);
        return ans;
    }
};
