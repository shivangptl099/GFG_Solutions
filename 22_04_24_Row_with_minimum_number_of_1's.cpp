class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        int ans = 1;
        int countOnes = INT_MAX;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < m; j++)
                if(a[i][j] == 1) count++;
            if(count < countOnes){
                countOnes = count;
                ans = i + 1;
            }
        }
        return ans;
    }
};
