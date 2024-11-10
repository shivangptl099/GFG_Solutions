class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> mySet(a.begin(), a.end());
        for(int x : b) mySet.insert(x);
        vector<int> ans(mySet.begin(), mySet.end());
        return ans;
    }
};
