class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        set<char> mySet;
        for(int i = 0; i < n; i++)
            mySet.insert(nuts[i]);
        char arr[9] = {'!','#','$','%','&','*','?','@','^'};
        int k = 0;
        for(int i = 0; i < 9; i++){
            if(mySet.count(arr[i])){
                nuts[k] = arr[i];
                bolts[k] = arr[i];
                k++;
            }
        }
    }
};
