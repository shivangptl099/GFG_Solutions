class Solution {
  public:

    string removeDups(string str) {
        vector<char> temp(26,0);
        string ans;
        for(char c : str){
            if(temp[c - 'a'] == 0) ans += c;
            temp[c - 'a'] = 1;
        }
        return ans;
    }
};
