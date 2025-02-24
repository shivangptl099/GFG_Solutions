class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            if(st.empty()) ans[i] = i + 1;
            else ans[i] = i - st.top();
            st.push(i);
        }
        return ans;
    }
};
