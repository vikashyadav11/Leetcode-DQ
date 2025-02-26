class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxSubSum=nums[0];
        int currSubSum=nums[0];
        // Kadane's Algo for max subarray sum
        for(int i=1;i<n;i++){
            currSubSum = max(nums[i],nums[i]+currSubSum);
            maxSubSum = max(currSubSum,maxSubSum);
        }
        
        // Kadane's Algo for max subarray sum
        int minSubSum=nums[0];
        currSubSum=nums[0];
        for(int i=1;i<n;i++){
            currSubSum = min(nums[i],nums[i]+currSubSum);
            minSubSum = min(currSubSum,minSubSum);
        }
        
        return max(maxSubSum,abs(minSubSum));
    }
};