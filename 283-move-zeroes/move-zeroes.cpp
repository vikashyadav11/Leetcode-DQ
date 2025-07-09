class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1)    
            return;
        int left=0;
        for(int right=0;right<n;right++){
            if(nums[right] != 0){
                swap(nums[right],nums[left]);
                left++;
            }
        }
        
    }
};