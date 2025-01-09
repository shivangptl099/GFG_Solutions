class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size(), curr = arr[0];
        if(curr == target) return {1,1};
        int s = 0, e = 1;
        while(e <= n){
            if(curr == target) return {s + 1, e};
            else if(curr < target){
                curr += arr[e];
                e++;
            } else {
                curr -= arr[s];
                s++;
            }
        }
        return {-1};
    }
};
