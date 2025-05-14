class Solution {
  public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string s = "1";
        for(int i = 2; i <= n; i++){
            int count = 1;
            char prev = s[0];
            string temp = "";
            for(int j = 1; j < s.length(); j++){
                if(prev != s[j]){
                    temp += to_string(count) + prev;
                    prev = s[j];
                    count = 1;
                } else {
                    count++;
                }
            }
            temp += to_string(count) + prev;
            s = temp;
        }
        return s;
    }
};
