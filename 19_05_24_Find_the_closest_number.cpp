class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int l = 0;
        int h = n - 1;
        int mid;
        while(l <= h){
            mid = l + ((h - l) / 2);
            if(arr[mid] == k) return k;
            else if(arr[mid] > k) h = mid - 1;
            else l = mid + 1;
        }
        int diff = abs(arr[mid] - k);
        int ans = arr[mid];
        if(mid + 1 < n && abs(arr[mid + 1] - k) <= diff) ans = arr[mid + 1];
        if(mid - 1 >= 0 && abs(arr[mid - 1] - k) < diff) ans = arr[mid - 1];
        return ans;
    } 
};
