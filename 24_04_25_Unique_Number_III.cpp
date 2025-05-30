class Solution {
  public:
    int getSingle(vector<int> &arr) {
        int ele = 0, mask, ones;
        for(int i = 0; i < 32; i++){
            ones = 0;
            mask = (1 << i);
            for(int j = 0; j < arr.size(); j++){
                if(arr[j] & mask) ones++;
            }
            ones %= 3;
            if(ones) ele |= mask;
        }
        return ele;
    }
};
