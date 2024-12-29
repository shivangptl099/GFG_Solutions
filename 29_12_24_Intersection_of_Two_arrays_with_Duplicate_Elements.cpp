class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        set<int> mySet;
        for(int x : a) mySet.insert(x);
        vector<int> ans;
        for(int x : b)
            if(mySet.count(x)){
                ans.push_back(x);
                mySet.erase(x);
            }
        return ans;
    }
};
