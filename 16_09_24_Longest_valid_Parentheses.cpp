class Solution {
  public:
    int maxLength(string& str) {
        int ans1 = 0, ans2 = 0, op = 0, cl = 0, i = 0;
        while(i < str.length()){
            if(str[i] == '(') op++;
            else cl++;
            if(cl > op) op = cl = 0;
            if(cl == op) ans1= max(ans1, op * 2);
            i++;
        }
        i = str.length() - 1;
        op = cl = 0;
        while(i >= 0){
            if(str[i] == '(') op++;
            else cl++;
            if(op > cl) op = cl = 0;
            if(op == cl) ans2 = max(ans2, op * 2);
            i--;
        }
        return max(ans1, ans2);
    }
};
