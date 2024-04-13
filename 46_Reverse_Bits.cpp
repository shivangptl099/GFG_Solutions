class Solution {
  public:
  
    string decimalToBinary(int num){
        if(num == 0) return "0";
        string result;
        while(num > 0){
            result = (num % 2 == 0 ? "0" : "1") + result;
            num /= 2;
        }
        return result;
    }
    long long reversedBits(long long x) {
        string binary = decimalToBinary(x);
        string revBinary;
        for(int i = 0; i < binary.length(); i++)
            revBinary = binary[i] + revBinary;
        int zeros = 32 - revBinary.length();
        int i = 0;
        while(i < zeros){
            revBinary += "0";
            i++;
        }
        long long ans = stoll(revBinary, nullptr, 2);
        return ans;
    }
};
