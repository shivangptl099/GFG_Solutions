class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        set<int> els;
        for(int x : arr) els.insert(x);
        for(int x : arr){
            if(target - x != x && els.count(target - x)) return true;
        }
        return false;
    }
};
