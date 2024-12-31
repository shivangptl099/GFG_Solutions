class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int maxi = -1, count = 0, ans = INT_MIN;
        vector<int> freq(1000001, 0);
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
            maxi = max(maxi, arr[i]);
        }
        for(int i = 0; i <= maxi; i++){
            if(freq[i] > 0){
                count++;
            } else {
                count = 0;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
