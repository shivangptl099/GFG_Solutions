class Solution {
  public:
    void sort012(vector<int>& arr) {
        int zeroCount = 0, oneCount = 0;
        for(int x : arr){
            if(x == 0) zeroCount++;
            else if(x == 1) oneCount++;
        }
        int i = 0;
        while(i < zeroCount) arr[i++] = 0;
        while(i < zeroCount + oneCount) arr[i++] = 1;
        while(i < arr.size()) arr[i++] = 2;
    }
};
