class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        vector<vector<int>> mat1(n, vector<int>(n));
        vector<vector<int>> mat2(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(a[i][j] == 'O') count = 0;
                else count++;
                mat1[i][j] = count;
            }
        }
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(a[j][i] == 'O') count = 0;
                else count++;
                mat2[j][i] = count;
            }
        }
        int temp,max = 0;
        for(int i = n - 1; i >= 0; i--){
            for(int j = n - 1; j >= 0; j--){
                temp = min(mat1[i][j],mat2[i][j]);
                while(temp > max){
                    if(mat1[i - temp + 1][j] >= temp && mat2[i][j - temp + 1] >= temp){
                        max = temp;
                    } else {
                        temp--;
                    }
                }
            }
        }
        return max;
    }
};
