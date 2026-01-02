class Solution {
public:
    vector<int> findNSE(vector<int>& arr){
        int n=arr.size();
        vector<int> nse(n);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }
            nse[i]=s.empty()?n:s.top();
            s.push(i);
        }
        return nse;
    }
    vector<int> findPSEE(vector<int>& arr){
        int n=arr.size();
        vector<int> psee(n);
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>arr[i]){
                s.pop();
            }
            psee[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        return psee;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse=findNSE(arr);
        vector<int> psee=findPSEE(arr);
        long long total=0;
        const int mod=1e9+7;

        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;

            total=(total+(((right*left*1LL)%mod)*arr[i])%mod)%mod;
        }
        return total;
    }
};