class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        stack<int> st;
        int n = color.size();
        for(int i = 0; i < n; i++){
            if(!st.empty() && color[st.top()] == color[i]
                          && radius[st.top()] == radius[i]) st.pop();
            else st.push(i);
        }
        return st.size();
    }
};
