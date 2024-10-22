class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int countX = 0, countY = 0, ans = 0;
        for(int element : arr){
            if(element == x) countX++;
            if(element == y) countY++;
            int diff = countX - countY;
            if(mp.find(diff) != mp.end()){
                ans += mp[diff];
            }
            mp[diff]++;
        }
        return ans;
    }
};
