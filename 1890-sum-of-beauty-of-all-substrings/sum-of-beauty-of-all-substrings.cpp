class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            int freq[26]={0};
            for(int j=i;j<n;j++){
                char ch=s[j];
                freq[ch-'a']++;
                int maxx=INT_MIN;
                int minn=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        maxx=max(freq[k],maxx);
                        minn=min(freq[k],minn);
                    }
                }
                ans+=maxx-minn;
            }
        }
        return ans;
    }
};