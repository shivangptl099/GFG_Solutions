class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int rows = mat.size(), cols = mat[0].size();
        int found_row = -1;
        for(int i = 0; i < rows; i++){
            if(x >= mat[i][0] && x <= mat[i][cols - 1]){
                found_row = i;
                break;
            }
        }
        if(found_row == rows || found_row == -1) return false;
        int l = 0, h = cols - 1;
        while(l <= h){
            int mid = l + (h - l) / 2;
            if(mat[found_row][mid] == x) return true;
            else if(mat[found_row][mid] < x) l = mid + 1;
            else h = mid - 1;
        }
        return false;
    }
};
