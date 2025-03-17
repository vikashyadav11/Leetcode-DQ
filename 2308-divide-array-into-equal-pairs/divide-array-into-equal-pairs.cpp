class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(int i=0;i<=500;i++){
            if(mp[i]%2 != 0)
                return false;
        }
        return true;
    }
};