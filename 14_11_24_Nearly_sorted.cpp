class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int i = 0;
        while(i < arr.size() && i <= k){
            pq.push(arr[i]);
            i++;
        }
        int s = 0;
        while(i < arr.size()){
            arr[s] = pq.top();
            pq.pop();
            s++;
            pq.push(arr[i]);
            i++;
        }
        while(!pq.empty()){
            arr[s] = pq.top();
            pq.pop();
            s++;
        }
    }
};
