class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(), arr.end(), [](string a,string b){
	        return (a + b > b + a);
	    });
	    string ans;
	    for(string x : arr){
	        ans += x;
	    }
	    if(ans[0] == '0') return 0;
	    return ans;
	}
};
