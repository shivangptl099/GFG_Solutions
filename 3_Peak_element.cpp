class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int i = 0;
       while(i < n){
           if(arr[i] < arr[i - 1]) return i - 1;
           i++;
       }
       return n - 1;
    }
};
