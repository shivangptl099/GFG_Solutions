class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int total = 0;
        long long n = arr.size() + 1;
        for(int x : arr) total += x;
        return (n * (n + 1) / 2) - total; 
    }
};
