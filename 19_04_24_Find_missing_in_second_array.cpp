class Solution{
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    set<int> mySet;
	    for(int i = 0; i < m; i++)
	        mySet.insert(b[i]);
	    vector<int> ans;
	    for(int i = 0; i < n; i++)
	        if(mySet.count(a[i]) == 0) ans.push_back(a[i]);
	    return ans;
	} 
};
