class Solution {
    
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int sumA = 0, sumB = 0;
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++){
            sumA += a[i];
            mp[2 * a[i]]++;
        }
        for(int i = 0; i < m; i++)
            sumB += b[i];
        int temp = (sumA - sumB);
        for(int i = 0; i < m; i++)
            if(mp.find(2 * b[i] + temp) != mp.end()) return 1;
        return -1;
    }
};
