class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        int n = mat1.size();
        int i = 0, j = (n * n) - 1;
        int ans = 0;
        while(i < n * n && j >= 0){
            int a_row = i / n, a_col = i % n;
            int b_row = j / n, b_col = j % n;
            int sum = mat1[a_row][a_col] + mat2[b_row][b_col];
            if(sum == x){
                ans++;
                i++;
                j--;
            } else if(sum < x){
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};
