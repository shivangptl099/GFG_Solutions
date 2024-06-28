class Solution {
  public:
    string pattern(vector<vector<int>> &arr){
        string ans = "-1";
        int n = arr.size();
        int i = 0;
        while(i < n){
            int s = 0;
            int e = n - 1;
            bool isPal = true;
            while(s < e){
                if(arr[i][s] != arr[i][e]){
                    isPal = false;
                    break;
                }
                s++;
                e--;
            }
            if(isPal){
                ans = to_string(i);
                ans += " R";
                return ans;
            }
            i++;
        }
        i = 0;
        while(i < n){
            int s = 0;
            int e = n - 1;
            bool isPal = true;
            while(s < e){
                if(arr[s][i] != arr[e][i]){
                    isPal = false;
                    break;
                }
                s++;
                e--;
            }
            if(isPal){
                ans = to_string(i);
                ans += " C";
                return ans;
            }
            i++;
        }
        return ans;
    }
};
