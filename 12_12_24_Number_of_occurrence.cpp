class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int l = 0, h = arr.size() - 1, mid;
        bool found = false;
        while(l <= h){
            mid = l + ((h - l) / 2);
            if(target == arr[mid]){
                found = true;
                break;
            }
            else if(target < arr[mid]) h = mid - 1;
            else l = mid + 1;
        }
        if(!found) return 0;
        l = mid;
        while(l >= 0 && arr[l] == target) l--;
        h = mid;
        while(h < arr.size() && arr[h] == target) h++;
        return h - l - 1;
    }
};
