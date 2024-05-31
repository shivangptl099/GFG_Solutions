class Solution {
  public:
    int swapNibbles(int n) {
        bitset<8> binary(n);
        string s = binary.to_string();
        string s1 = s.substr(0, 4);
        string s2 = s.substr(4);
        s = s2 + s1;
        int ans = stoi(s, nullptr, 2);
        return ans;
    }
};
