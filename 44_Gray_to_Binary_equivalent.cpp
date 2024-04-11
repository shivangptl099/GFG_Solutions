class Solution{
    public:
    
    string intToBinary(int num){
        if(num == 0) return "0";
        string result;
        while (num > 0) {
            result = (num % 2 == 0 ? "0" : "1") + result;
            num /= 2;
        }
        return result;
    }
    
    string grayToBinary(string s){
        string result;
        result += s[0];
        char prev = s[0];
        int i = 1;
        while(i < s.length()){
            prev = (s[i] == prev) ? '0' : '1';
            result += prev;
            i++;
        }
        return result;
    }
    
    int grayToBinary(int n)
    {
        string binary = intToBinary(n);
        string gray = grayToBinary(binary);
        int ans = stoi(gray, nullptr, 2);
        return ans;
    }
};
