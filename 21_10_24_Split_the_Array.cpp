class Solution {
  public:
    int countgroup(vector<int>& arr) {
        long long mod = 1e9 + 7, XOR = 0;
        for(int x : arr){
            XOR ^= x;
        }
        if(XOR != 0) return 0;
        int ans = 1;
        for(int i = 1; i < arr.size(); i++){
            ans = (ans * 2) % mod;
        }
        return ans - 1;
    }
};
