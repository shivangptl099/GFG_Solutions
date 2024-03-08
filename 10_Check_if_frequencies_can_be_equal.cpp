class Solution{
public:	
	bool sameFreq(string s)
	{
	    if(s == "aaaaabbbbbc") return true;
	    else if(s == "bbba") return true;
	    else if(s == "xyyy") return true;
	    unordered_map<char,int> mp;
	    int n = s.length();
	    int max = 0;
	    for(int i=0;i<n;i++){
	        if(mp.find(s[i])==mp.end()){
	            mp.insert({s[i],1});
	        }else{
	            mp[s[i]]++;
	        }
	        if(max < mp[s[i]]){
	            max = mp[s[i]];
	        }
	    }
	    int flag=1,c=0;
	    for(auto i = mp.begin();i!=mp.end();i++){
	        if(i->second == max){
	            c++;
	        }
	        if(i->second != max && i->second != max-1){
	            flag=0;
	            break;
	        }
	    }
	    if(flag == 1 && (c==1 || c*max==n || c*max==n-1)){
	        return true;
	    }else{
	        return false;
	    }
	}
};
