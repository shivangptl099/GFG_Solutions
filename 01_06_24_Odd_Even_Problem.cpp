class Solution {
  public:
    string oddEven(string s) {
        vector<int> arr(27, 0);
        for(char c : s)
            arr[c - 'a' + 1]++;
        int x = 0;
        int y = 0;
        for(int i = 0; i < 27; i++)
            if(arr[i] != 0)
                if(i % 2 == 0 && arr[i] % 2 == 0) x++;
                else if(i % 2 != 0 && arr[i] % 2 != 0) y++;
        if((x + y) % 2 == 0) return "EVEN";
        else return "ODD";
    }
};
