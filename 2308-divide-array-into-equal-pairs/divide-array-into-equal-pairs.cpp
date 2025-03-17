class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto& entry : mp){
            if(entry.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};