class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++){
            if(x >= mat[i][0] && x <= mat[i][m - 1]){
                int l = 0, h = m - 1;
                while(l <= h){
                    int mid = l + (h - l) / 2;
                    if(mat[i][mid] == x) return true;
                    else if(mat[i][mid] < x) l = mid + 1;
                    else h = mid - 1;
                }
            }
        }
        return false;
    }
};
