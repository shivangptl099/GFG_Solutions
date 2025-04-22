class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int XOR = 0;
        for(int x : arr) XOR ^= x;
        return XOR;
    }
};
