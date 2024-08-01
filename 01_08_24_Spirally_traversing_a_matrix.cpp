class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;
        vector<int> ans;
        int max = matrix.size() * matrix[0].size();
        while(ans.size() < max){
            //right
            for(int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //down
            for(int i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            //left
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            //up
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
