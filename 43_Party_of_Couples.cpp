class Solution{
    public:
    int findSingle(int n, int arr[]){
        int ans = arr[0];
        for(int i = 1; i < n; i++)
            ans ^= arr[i];
        return ans;
    }
};
