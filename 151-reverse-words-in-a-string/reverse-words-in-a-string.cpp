class Solution {
public:
    string reverseWords(string s) {
        //reverse whole string
        reverse(s.begin(),s.end());
        int i=0;// i will iterate through whole string
        int l=0,r=0;
        int n=s.length();
        while(i<n){
            while(i<n && s[i]!=' '){
                s[r]=s[i];
                i++;
                r++;
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
            s[r]=' ';
            r++;
            l=r;
            }
            i++;
        }
        s=s.substr(0,r-1);
        return s;
    }
};