class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0];
        string last=v[n-1];
        for(int i=0;i<first.size();i++){
            if(first[i] != last[i])
                break;
            else
                ans+=first[i];
        }
        return ans;
    }
};