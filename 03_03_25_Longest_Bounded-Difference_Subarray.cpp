class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        deque <int> mindq, maxdq;
        int n = arr.size();
        int s = 0, e = 0;
        int ansStart = 0, ansEnd = 0;
        while(e < n){
            while(!mindq.empty() && arr[mindq.back()] > arr[e]) mindq.pop_back();
            while(!maxdq.empty() && arr[maxdq.back()] < arr[e]) maxdq.pop_back();
            mindq.push_back(e);
            maxdq.push_back(e);
            if(arr[maxdq.front()] - arr[mindq.front()] > x){
                if(s == maxdq.front()) maxdq.pop_front();
                if(s == mindq.front()) mindq.pop_front();
                s++;
            }
            if((ansEnd - ansStart) < (e - s)) {
                ansEnd = e;
                ansStart = s;
            }
            e++;
        }
        vector<int> ans;
        for(int i = ansStart; i <= ansEnd; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
