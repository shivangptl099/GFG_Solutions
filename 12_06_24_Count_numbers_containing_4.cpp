class Solution {
  public:
    int countNumberswith4(int n) {
        int ans = 0;
        for(int i = 0; i <= n; i++){
            string s = to_string(i);
            if(s.find("4") != string::npos) ans++;
        }
        return ans;
    }
};
