class Solution {
  public:
    int check(vector<int> &stalls, int checkVal){
        int cowCount = 1, prevPos = stalls[0];
        for(int i = 1; i < stalls.size(); i++){
            if(stalls[i] - prevPos >= checkVal){
                cowCount++;
                prevPos = stalls[i];
            }
        }
        return cowCount;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int end = stalls.back() - stalls.front();
        int start = 1, ans = 0;;
        while(start <= end){
            int mid = start + (end - start) / 2;
            int checkVal = check(stalls, mid);
            if(checkVal >= k){
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};
