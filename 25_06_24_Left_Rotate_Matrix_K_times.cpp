class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> ans(rows, vector<int>(cols));
        k = k % cols;
        for(int i = 0; i < rows; i++){
            int s = 0;
            vector<int> temp(cols);
            for(int j = k; s < cols; j++){
                j = j % cols;
                temp[s] = mat[i][j];
                s++;
            }
            for(int j = 0; j < cols; j++){
                ans[i][j] = temp[j];
            }
        }
        return ans;
    }
};
