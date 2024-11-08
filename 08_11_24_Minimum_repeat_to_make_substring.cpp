class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        int ans = 1;
        string temp = s1;
        while(s1.length() < s2.length()){
            s1 += temp;
            ans++;
        }
        if(s1.find(s2) != -1) return ans;
        s1 += temp;
        ans++;
        if(s1.find(s2) != -1) return ans;
        return -1;
    }
};
