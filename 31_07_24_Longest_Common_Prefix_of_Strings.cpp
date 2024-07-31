class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        if(arr.size() == 1) return arr[0];
        string ans, s1, s2;
        s1 = arr[0];
        s2 = arr[1];
        int i = 0;
        while(i < s1.length() && i < s2.length() && s1[i] == s2[i]){
            ans += s1[i];
            i++;
        }
        i = 2;
        while(i < arr.size()){
            int j = 0;
            string temp = "";
            while(j < ans.length() && j < arr[i].length() && ans[j] == arr[i][j]){
                temp += ans[j];
                j++;
            }
            if(temp == "") return "-1";
            ans = temp;
            i++;
        }
        if(ans == "") return "-1";
        return ans;
    }
};
