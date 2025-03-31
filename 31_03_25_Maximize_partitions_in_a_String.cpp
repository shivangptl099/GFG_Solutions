class Solution {
  public:
    int maxPartitions(string &s) {
        int n = s.length();
        int arr[26];
        for(int i = 0; i < n; i++){
            arr[s[i] - 'a'] = i;
        }
        int ans = 0, last = -1;
        for(int i = 0; i < n; i++){
            last = max(last, arr[s[i] - 'a']);
            if(i == last){
                ans++;
                last = -1;
            }
        }
        return ans;
    }
};
