class Solution {
  public:
    string binaryNextNumber(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        bool flag = false;
        while(i < s.length()){
            if(s[i] == '0'){
                s[i] = '1';
                flag = true;
                break;
            }
            else s[i] = '0';
            i++;
        }
        if(!flag) s += '1';
        reverse(s.begin(), s.end());
        i = 0;
        while(i < s.length() && s[i] != '1')
            i++;
        s = s.substr(i);
        return s;
    }
};
