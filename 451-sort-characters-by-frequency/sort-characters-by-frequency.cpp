class Solution {
public:
    typedef pair<char,int> P;
    string frequencySort(string s) {
        vector<P>  vec(123);
        for(char &ch:s){
            int freq=vec[ch].second;
            vec[ch]={ch,freq+1};
        }
        auto lambda=[&](P &a, P &b){
            return a.second > b.second;
        };
        sort(vec.begin(),vec.end(),lambda);

        string ans="";

        for(int i=0;i<123;i++){
            if(vec[i].second > 0){
                char ch=vec[i].first;
                int freq=vec[i].second;
                string temp=string(freq,ch);

                ans+=temp;
            }
        }
        return ans;
    }
};