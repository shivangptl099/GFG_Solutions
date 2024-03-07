class Solution {
  public:
    string longestSubstring(string s, int n) {
        if(n == 1) return "-1";
        int max_len = 0;
        int index = 0;
        vector<vector<int>> LRS(n + 1, vector<int>(n + 1,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i >= j) LRS[i][j] = 0;
                else{
                    if(s[i] == s[j]){
                        if(i - 1 >= 0 && j - 1 >= 0){
                            int temp = LRS[i-1][j-1];
                            if(temp >= j - i){
                                LRS[i][j] = 0;
                            } else {
                                LRS[i][j] = temp + 1;
                            }
                        } else {
                            LRS[i][j] = 1;
                        }
                        if(LRS[i][j] > max_len){
                            max_len = LRS[i][j];
                            index = max(i, index);
                        }
                    } else {
                        LRS[i][j] = 0;
                    }
                }
            }
        }
        string ans = "";
        if(max_len > 0){
            for(int i = index - max_len + 1; i < index + 1; i++){
                ans += s[i];
            }
        }
        return ans;
    }
};
