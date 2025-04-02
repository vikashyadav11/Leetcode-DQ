class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0, maxI = 0, maxDiff = 0;
        for (int k = 0; k < n; k++) {
            res = max(res, maxDiff * nums[k]);
            maxDiff = max(maxDiff, maxI - nums[k]);
            maxI = max(maxI, (long long)nums[k]);
        }
        return res;
    }
};