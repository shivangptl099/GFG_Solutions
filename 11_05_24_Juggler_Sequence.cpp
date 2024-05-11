class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long> ans;
        ans.push_back(n);
        long long temp = n;
        while(temp != 1){
            if(temp % 2 == 0) temp = pow(temp, 0.5);
            else temp = pow(temp, 1.5);
            ans.push_back(temp);
        }
        return ans;
    }
};
