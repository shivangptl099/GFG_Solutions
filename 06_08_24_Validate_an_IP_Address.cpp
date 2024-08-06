class Solution {
  public:
    int isValid(string str) {
        int i = 0;
        int dots = 0;
        string s;
        while(i < str.length()){
            if(str[i] != '.'){
                s += str[i];
            } else {
                if(s.length() != 1 && s[0] == '0') return false;
                if(s == "") return false;
                int x = stoi(s);
                if(x < 0 || x > 255) return false;
                s = "";
                dots++;
            }
            i++;
        }
        if(dots != 3 || s == "") return false;
        i = stoi(s);
        if(i < 0 || i > 255) return false;
        return true;
    }
};
