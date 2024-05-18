class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int l = 0, h = a.size()-1;
        int ans = -1;
        while(l <= h){
            int mid = l + ((h - l) / 2);
            ans = max(ans, a[mid]);
            if(mid == 0) l = mid + 1;
            else if(mid == a.size() - 1) h = mid - 1;
            else if(a[mid] < a[mid + 1]) l = mid + 1;
            else h = mid - 1;
        }
        return ans;
    }
};
