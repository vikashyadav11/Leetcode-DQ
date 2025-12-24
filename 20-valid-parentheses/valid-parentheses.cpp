class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty())
                    return 0;
                else if((c==')' && st.top()=='(') || (c=='}' && st.top()=='{') || (c==']' && st.top()=='[')){
                    st.pop();
                }
                else
                    return 0;
            }
        }
        return st.empty();
    }
};