class Solution {
  public:
    string compareFrac(string str) {
        string ans1, ans2, s1, s2;
        int i = 0;
        while(str[i] != '/') s1 += str[i++];
        i++;
        while(str[i] != ',') s2 += str[i++];
        i += 2;
        float f1 = stoi(s1) / float(stoi(s2));
        ans1 += s1 + "/" + s2;
        s1 = "";
        s2 = "";
        while(str[i] != '/') s1 += str[i++];
        i++;
        while(i < str.length()) s2 += str[i++];
        float f2 = stoi(s1) / float(stoi(s2));
        ans2 = s1 + "/" + s2;
        if(f1 == f2) return "equal";
        else if(f1 > f2) return ans1;
        else return ans2;
    }
};
