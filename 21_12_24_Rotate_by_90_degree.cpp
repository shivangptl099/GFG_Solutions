class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            int s = 0, e = n - 1;
            while(s < e){
                swap(mat[s][i], mat[e][i]);
                s++, e--;
            }
        }
    }
};
