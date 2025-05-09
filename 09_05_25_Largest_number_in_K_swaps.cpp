class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
        int count = 0, i = 0;
        while(count < k && i < s.length()){
            int maxi = s[i] - '0';
            int max_index = i;
            for(int j = i + 1; j < s.length(); j++){
                if(s[j] - '0' >= maxi){
                    maxi = s[j] - '0';
                    max_index = j;
                }
            }
            if(maxi != s[i] - '0'){
                swap(s[i], s[max_index]);
                count++;
            }
            i++;
        }
        return s;
    }
};
