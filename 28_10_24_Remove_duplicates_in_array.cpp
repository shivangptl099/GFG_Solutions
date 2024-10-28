class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> check(101, 0);
        vector<int> ans;
        for(int x : arr){
            if(check[x] == 0){
                check[x]++;
                ans.push_back(x);
            }
        }
        return ans;
    }
};
