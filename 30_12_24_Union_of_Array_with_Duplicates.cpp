class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        set<int> mySet;
        for(int x : a) mySet.insert(x);
        for(int x : b) mySet.insert(x);
        return mySet.size();
    }
};
