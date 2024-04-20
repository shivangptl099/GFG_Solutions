class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> mySet;
        for(int i = 0; i < n; i++) mySet.insert(arr1[i]);
        for(int i = 0; i < m; i++) mySet.insert(arr2[i]);
        vector<int> ans;
        for(auto it : mySet)
            ans.push_back(it);
        return ans;
    }
};
