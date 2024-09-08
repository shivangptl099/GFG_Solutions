class Solution {
  public:
    void sort012(vector<int>& arr) {
        int zeros = 0, ones = 0, twos = 0;
        for(int x : arr){
            if(x == 0) zeros++;
            else if(x == 1) ones++;
            else twos++;
        }
        for(int i = 0; i < arr.size(); i++){
            if(zeros > 0){
                arr[i] = 0;
                zeros--;
            }
            else if(ones > 0){
                arr[i] = 1;
                ones--;
            } else {
                arr[i] = 2;
                twos--;
            }
        }
    }
};
