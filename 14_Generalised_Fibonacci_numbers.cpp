class Solution {
  public:
  
    vector<vector<long long>> matmul(vector<vector<long long>> a, vector<vector<long long>> b,long long m){
    int n = a.size();
        vector<vector<long long>> res(n, vector<long long>(n, 0));
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int x = 0;
                int y = 0;
                long long temp = 0;
                while(x < 3 && y < 3){
                    temp += a[i][x] * b[y][j];
                    x++;
                    y++;
                }
                res[i][j] = temp % m;
            }
        }
        return res;
    }
  
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        if(n <= 2) return 1;
        vector<vector<long long>> ans = {{1,0,0}, {0,1,0}, {0,0,1}};
        vector<vector<long long>> fib = {{a,b,c}, {1,0,0}, {0,0,1}};
        n -= 2;
        while(n > 0){
            if(n % 2 == 1) ans = matmul(ans,fib,m);
            fib = matmul(fib,fib,m);
            n /= 2;
        }
        long long x = 0;
        for(int i = 0; i < 3; i++){
            x += ans[0][i];
        }
        return x % m;
    }
};
