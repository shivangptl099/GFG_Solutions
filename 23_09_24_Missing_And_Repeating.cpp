class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        long long sum = (long long)n * (n + 1) / 2;
        long long squared_sum = (long long)n * (n  + 1) * ((2 * n) + 1) / 6;
        long long total = 0;
        long long squared_total = 0;
        for(int x : arr){
            total += x;
            squared_total += (long long) x * x;
        }
        // (a + b + b) - (a + b + c) => b - c
        long long b_minus_c = total - sum;
        // (a^2 + b^2 + b^2) - (a^2 + b^2 + c^2) => b^2 - c^2
        long long eqn2 = squared_total - squared_sum;
        // (b^2 - c^2) = (b + c) * (b - c)
        // (b + c) = (b^2 - c^2) / (b - c)
        long long b_plus_c = eqn2 / b_minus_c;
        // b => repeating
        // c => missing
        // (b + c) + (b - c) => 2b
        long long repeating = (b_plus_c + b_minus_c) / 2;
        // (b + c) - b(repeating) => c(missing)
        long long missing = b_plus_c - repeating;
        return {repeating, missing};
    }
};
