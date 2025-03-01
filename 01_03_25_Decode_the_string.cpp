class Solution {
  public:
    string decodedString(string &s) {
        stack<char> st;
        for(char c : s){
            if(c != ']'){
                st.push(c);  
            } else {
                string word = "";
                while(!st.empty() && st.top() != '['){
                    word = st.top() + word;
                    st.pop();
                }
                st.pop();
                string n;
                while(!st.empty() && isdigit(st.top())){
                    n = st.top() + n;
                    st.pop();
                }
                int k = stoi(n);
                string converted = "";
                while(k--){
                    converted += word;
                }
                for(char ch : converted) st.push(ch);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
