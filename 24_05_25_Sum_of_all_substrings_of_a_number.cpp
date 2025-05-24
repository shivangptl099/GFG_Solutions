class Solution {
  public:
    int sumSubstrings(string &s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            ans += (s[i] - '0');
            string temp;
            temp += s[i];
            for(int j = i + 1; j < s.length(); j++){
                temp += s[j];
                ans += stoi(temp);
            }
        }
        return ans;
    }
};
