class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        string ans, temp;
        int i = 0;
        while(i < str.length()){
            if(str[i] == '.'){
                ans = "." + temp + ans;
                temp = "";
            } else {
                temp += str[i];   
            }
            i++;
        }
        ans = temp + ans;
        return ans;
    }
};
