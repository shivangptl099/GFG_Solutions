class Solution {
  public:
    string printString(string s, char ch, int count) {
        int i = 0;
        while(i < s.length() && count > 0){
            if(s[i] == ch) count--;
            i++;
        }
        string ans = s.substr(i);
        return ans;
    }
};
