class Solution {
  public:
    string armstrongNumber(int n) {
        int x = 0;
        int temp = n;
        while(n > 0){
            x += pow((n % 10), 3);
            n /= 10;
        }
        if(temp == x) return "true";
        else return "false";
    }
};
