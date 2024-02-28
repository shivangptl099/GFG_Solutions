class Solution{
    public:
    int DivisibleByEight(string s){
        int x;
        if(s.length() > 3){
            string s1 = s.substr(s.length() - 3);
            x = stoi(s1);
        }
        else{
            x = stoi(s);
        }
        if(x % 8 == 0) return 1;
        else return -1;
    }
};
