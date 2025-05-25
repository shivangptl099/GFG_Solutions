class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        unordered_set<int> mySet;
        int n = arr.size();
        for(int x : arr) mySet.insert(x * x);
        for(int i = 0; i < n; i++){
            int a = arr[i];
            for(int j = i + 1; j < n; j++){
                int b = arr[j];
                if(mySet.count((a * a) + (b * b))) return true;
            }
        }
        return false;
    }
};
