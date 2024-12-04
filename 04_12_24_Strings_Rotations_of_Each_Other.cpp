class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        string str = s2 + '#' + s1 + s1;
        int m = s2.length(), n = str.length(), i = 0, j = 1;
        vector<int> LPS(n, 0);
        while(j < n){
            if(str[i] == str[j]){
                LPS[j++] = ++i;
                if(i == m) return true;
            } else if(i != 0){
                i = LPS[i - 1];
            } else {
                j++;
            }
        }
        return false;
    }
};
