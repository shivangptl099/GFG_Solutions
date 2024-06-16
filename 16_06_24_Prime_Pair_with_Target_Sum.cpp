class Solution {
  public:
    vector<int> getPrimes(int n) {
        vector<int> primes(n + 1, 1);
        int i,j;
        primes[0] = 0;
        primes[1] = 0;
        for(i = 2; i <= n; i++){
            if(!primes[i]) continue;
            for(j = 2; i * j <= n; j++){
                primes[i * j] = 0;
            }
        }
        
        for(i = 1; i <= n/2; i++){
            j = n - i;
            if(primes[i] && primes[j]){
                return {i, j};
            }
        }
        return {-1,-1};
    }
};
