class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int top = 0, left = 0;
        int bottom = mat.size() - 1;
        int right = mat[0].size() - 1;
        vector<int> ans;
        while(top <= bottom && left <= right){
            // left to right
            for(int i = left; i <= right; i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            //top to bottom
            for(int i = top; i <= bottom; i++){
                ans.push_back(mat[i][right]);  
            }
            right--;
            //right to left
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            //bottom to up
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};