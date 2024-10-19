class Solution {
  public:
    string roundToNearest(string str) {
        int len = str.length();
        if(str[len - 1] >= '0' && str[len - 1] <= '5'){
            str[len - 1] = '0';
            return str;
        } else {
            str[len - 1] = '0';
            int i = len - 2;
            while(i >= 0 && str[i] == '9'){
                str[i] = '0';
                i--;
            }
            if(i < 0) str = '1' + str;
            else {
                str[i] += 1;
            }
        }
        return str;
    }
};
