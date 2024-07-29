class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int maxOnes = 0;
        int ans = -1;
        for(int i = 0; i < arr.size(); i++){
            int currentOnes = 0;
            for(int j = 0; j < arr[0].size(); j++){
                if(arr[i][j]) currentOnes++;
            }
            if(maxOnes < currentOnes){
                maxOnes = currentOnes;
                ans = i;
            }
        }
        return ans;
    }
};
