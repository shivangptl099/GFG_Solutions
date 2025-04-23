class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        set<int> mySet;
        for(int x : arr){
            if(mySet.count(x)) mySet.erase(x);
            else mySet.insert(x);
        }
        int a = -1, b = -1;
        for(int x : mySet){
            if(a == -1) a = x;
            else b = x;
        }
        if(a > b) return {b, a};
        return {a, b}; 
    }
};
