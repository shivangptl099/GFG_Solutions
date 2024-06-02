class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        vector<int> ans;
        int x = 0;
        for(int i = queries.size() - 1; i >= 0; i--)
            if(queries[i][0] == 1) x ^= queries[i][1];
            else ans.push_back(queries[i][1] ^ x);
        ans.push_back(x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
