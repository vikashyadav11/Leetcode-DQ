class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,maxCnt=0;
        // if(nums[0]==1){
        //     cnt=1;
        //     maxCnt=1;
        // }
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
                maxCnt=max(maxCnt,cnt);
            }
            else{
                cnt=0;
            }
        }
        return maxCnt;
    }
};