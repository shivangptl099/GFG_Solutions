class Solution {
  public:
    vector<int> LPSArray(string pat){
        int n = pat.size();
        vector<int> LPS(n, 0);
        int i = 1, j = 0;
        while(i < pat.length()){
            if(pat[j] == pat[i]){
                j++;
                LPS[i] = j;
                i++;
            } else {
                if(j != 0){
                    j = LPS[j - 1];
                } else {
                    LPS[i] = 0;
                    i++;
                }
            }
        }
        return LPS;
    }  
    vector<int> search(string& pat, string& txt) {
        vector<int> ans;
        vector<int> LPS = LPSArray(pat);
        int i = 0, j = 0, n = txt.length(), m = pat.length();
        while(i < n){
            if(txt[i] == pat[j]){
                i++;
                j++;
                if(j == m){
                    ans.push_back(i - j);
                    j = LPS[j - 1];
                }
            } else {
                if(j != 0) j = LPS[j - 1];
                else i++;
            }
        }
        return ans;
    }
};
