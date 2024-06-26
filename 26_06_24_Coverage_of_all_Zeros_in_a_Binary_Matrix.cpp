class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int ans = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    if(j - 1 >= 0 && matrix[i][j - 1] == 1) ans++;
                    if(j + 1 < cols && matrix[i][j + 1] == 1) ans++;
                    if(i - 1 >= 0 && matrix[i - 1][j] == 1) ans++;
                    if(i + 1 < rows && matrix[i + 1][j] == 1) ans++;   
                }
            }
        }
        return ans;
    }
};
