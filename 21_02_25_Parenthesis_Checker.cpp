class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '[') st.push(c);
            else {
                if(st.empty()) return false;
                char curr = st.top(); st.pop();
                if((c == ')' && curr != '(') ||
                   (c == '}' && curr != '{') ||
                   (c == ']' && curr != '[')) return false;
            }
        }
        return st.empty();
    }
};
