class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maj=0;
        int ans=0;

        for(int n:nums){
            freq[n]++;
            if(freq[n]>maj){
                maj=freq[n];
                ans=n;
            }
        }
        return ans;
    }
};