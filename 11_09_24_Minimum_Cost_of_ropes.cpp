class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
        long long ans = 0;
        while(pq.size() > 1){
            long long x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();
            ans += x + y;
            pq.push(x + y);
        }
        return ans;
    }
};
