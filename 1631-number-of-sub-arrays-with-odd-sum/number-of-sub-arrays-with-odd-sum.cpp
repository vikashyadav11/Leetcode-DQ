class Solution {
public:
    int M=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int cummulitativeSum=0;
        int result=0;
        int odd=0;
        int even=1;
        for(int i=0;i<n;i++){
            cummulitativeSum += arr[i];
            if(cummulitativeSum % 2 == 0){//even + odd = odd
                result = (result+odd) % M;
                even++;
            }
            else{//odd + even = odd
                result = (result+even) % M;
                odd++;
            }
        }
    return result;
    }
};