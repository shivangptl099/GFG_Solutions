class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n = mat.size();
         unordered_map<int,vector<int>> mp;
         for(int i = 0; i < n; i++)
             for(int j = 0; j < n; j++)
                 mp[i + j].push_back(mat[i][j]);
        vector<int> ans;
        int i = 0;
        while(i <= 2*(n - 1)){
            vector<int>& temp = mp[i];
            if (i % 2 != 0)
                for(int x : temp) ans.push_back(x);
            else
                for (int j = temp.size() - 1; j >= 0; j--) ans.push_back(temp[j]);
            i++;
        }
        return ans;
    }
};
