class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        vector<int> freq(26,0);
        for(auto c : s)
            freq[c - 'a']++;
        for(auto c : s)
            if(freq[c - 'a'] == 1) return c;
        return '$';
    }
};
