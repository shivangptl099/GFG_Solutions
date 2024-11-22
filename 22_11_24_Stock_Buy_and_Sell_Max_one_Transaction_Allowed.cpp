class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int ans = 0, minPrice = INT_MAX;
        for(int price : prices){
            minPrice = min(price, minPrice);
            ans = max(ans, price - minPrice);
        }
        return ans;
    }
};
