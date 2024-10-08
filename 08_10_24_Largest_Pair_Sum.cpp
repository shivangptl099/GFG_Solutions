class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int first_max = 0;
        for(int x : arr){
            first_max = max(x, first_max);
        }
        int second_max = 0;
        for(int x : arr){
            if(x == first_max) continue;
            second_max = max(x, second_max);
        }
        return first_max + second_max; 
    }
};
