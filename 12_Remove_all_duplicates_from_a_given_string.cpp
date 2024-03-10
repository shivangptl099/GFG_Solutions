class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_map<char,int> mp;
	    string ans;
	    for(char c : str){
            if(mp.find(c) == mp.end()){
                 mp[c] = 1;
                 ans += c;
            }
	    }
	    return ans;
	}
};
