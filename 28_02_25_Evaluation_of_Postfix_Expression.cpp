class Solution {
  public:
    int evaluate(vector<string>& arr) {
        stack<int> st;
        for(string s : arr){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int y = st.top(); st.pop();
                int x = st.top(); st.pop();
                int ans;
                if(s == "+") ans = x + y;
                else if(s == "-") ans = x - y;
                else if(s == "*") ans = x * y;
                else ans = x / y;
                st.push(ans);
            } else {
                int num = stoi(s);
                st.push(num);
            }
        }
        return st.top();
    }
};
