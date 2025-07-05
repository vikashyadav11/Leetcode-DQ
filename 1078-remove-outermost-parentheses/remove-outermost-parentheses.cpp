class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(c==0)
                    c++;
                else{
                    c++;
                    ans+=s[i];
                }
            }
            else{
                c--;
                if(c==0)
                    continue;
                ans+=s[i];
            }
        }
        return ans;
    }
};