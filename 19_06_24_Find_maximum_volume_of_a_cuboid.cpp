class Solution {
  public:
    double maxVolume(double p, double a) {
        double l = (p - sqrt((p * p) - (24 * a))) / 12;
        double ans = (l * l) * ((p / 4) - (2 * l));
        return ans;
    }
};
