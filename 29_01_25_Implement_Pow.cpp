class Solution {
  public:
    double power(double b, int e) {
        if(e == 0) return 1;
        else if(e < 0) return 1 / power(b, -e);
        
        double tempans = power(b, e / 2);
        if(e & 1) return tempans * tempans * b;
        else return tempans * tempans;
    }
};
