class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int> pos;
        vector<int> neg;
        int n = 0;
        for(int x : arr){
            if(x < 0) neg.push_back(x);
            else pos.push_back(x);
            n++;
        }
        int i = 0, j = 0, x = 0;
        while(x < n){
            if(x % 2 == 0){
                if(i < pos.size()){
                    arr[x] = pos[i++];
                } else {
                    arr[x] = neg[j++];
                }
            } else {
                if(j < neg.size()){
                    arr[x] = neg[j++];
                } else {
                    arr[x] = pos[i++];
                }
            }
            x++;
        }
    }
};
