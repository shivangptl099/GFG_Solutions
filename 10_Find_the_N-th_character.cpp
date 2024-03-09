class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        string s1;
        while(r > 0){
            s1 = "";
            for(char c : s){
                if(c == '1') s1 += "10";
                else s1 += "01";
                if(s1.length() > n) break;
            }
            r--;
            s = s1;
        }
        return s[n];
    }
};
