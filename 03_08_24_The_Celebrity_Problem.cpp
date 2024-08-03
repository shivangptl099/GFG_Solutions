class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        for(int i = 0; i < mat.size(); i++){
            bool flag = false;
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                bool isCelebrity = true;
                for(int k = 0; k < mat.size(); k++){
                    if(k == i) continue;
                    if(mat[k][i] == 0){
                        isCelebrity = false;
                        break;
                    }
                }
                if(isCelebrity) return i;
            }
        }
        return -1;
    }
};
