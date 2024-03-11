class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int ans = 0;
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            int diff = x - mat1[i][j];
	            int e = n - 1;
	            int s = 0;
	            while(e >= 0 && s < n){
	                if(mat2[s][e] == diff){
	                    ans++;
	                    break;
	                }
	                else if(mat2[s][e] < diff){
	                    e = n - 1;
	                    s++;
	                } else {
	                    e--;
	                }
	            }
	        }
	    }
	    return ans;
	}
};
