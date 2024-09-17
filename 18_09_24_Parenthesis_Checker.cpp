class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        int i = 0;
        while(i < x.length()){
            if(x[i] == '(' || x[i] == '[' || x[i] == '{') st.push(x[i]);
            else {
                if(st.empty()) return false;
                if(x[i] == ')'){
                    if(st.top() != '(') return false;
                    else st.pop();
                }
                else if(x[i] == ']'){
                    if(st.top() != '[') return false;
                    else st.pop();
                } else {
                    if(st.top() != '{') return false;
                    else st.pop();
                }
            }
            i++;
        }
        if(!st.empty()) return false;
        return true;
    }

};
