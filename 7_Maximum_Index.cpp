class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int max = 0;
        int i = 0;
        while(i < n - 1){
            int j = n - 1;
            while(j > i){
                if(a[i] <= a[j]){
                    if(j - i > max){
                        max = j - i;
                    }
                    break;
                }
                j--;
            }
            i++;
        }
        return max;
    }
};
