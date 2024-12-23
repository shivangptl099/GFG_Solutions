class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int rows = mat.size();
        int cols = mat[0].size();
        for(int i = 0; i < rows; i++){
            if(x >= mat[i][0] && x <= mat[i][cols - 1]){
                int l = 0, h = cols - 1;
                while(l <= h){
                    int mid = l + (h - l) / 2;
                    if(x == mat[i][mid]) return true;
                    else if(x < mat[i][mid]) h = mid - 1;
                    else l = mid + 1;
                }
            }
        }
        return false;
    }
};
