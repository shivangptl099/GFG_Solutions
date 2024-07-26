class Solution {
  public:

    bool kPangram(string str, int k) {
        unordered_set<char> mySet;
        int validChars = 0;
        for(char s : str)
            if(s != ' '){
                validChars++;
                mySet.insert(s);
            }
        int requiredChars = 26 - mySet.size();
        int changeableChars = validChars - mySet.size();
        if(requiredChars > changeableChars) return false;
        if(requiredChars > k) return false;
        return true;
    }
};
