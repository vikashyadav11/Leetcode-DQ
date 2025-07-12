class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        vector<int> schar(26,0);
        vector<int> tchar(26,0);
        for(int i=0;i<s.length();i++){
            schar[s[i]-'a']++;
            tchar[t[i]-'a']++;
        }
        if(schar==tchar)
            return true;
        return false;
    }
};