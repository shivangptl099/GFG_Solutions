class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int ans = 1;
        int curr_max = height[0];
        int i = 1;
        while(i < height.size()){
            if(height[i] > curr_max){
                ans++;
                curr_max = height[i];
            }
            i++;
        }
        return ans;
    }
};
