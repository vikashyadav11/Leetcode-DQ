class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
        vector<int> ans(2,-1);
        int n=nums.size();
        //Searching for first occurence
        int l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==k){
                ans[0]=m;
                h=m-1;
            }
            else if(nums[m]>k){
                h=m-1;
            }
            else 
                l=m+1;
        }
        //Searching for last occurence
        l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==k){
                ans[1]=m;
                l=m+1;
            }
            else if(nums[m]>k){
                h=m-1;
            }
            else 
                l=m+1;
        }
        return ans;
    }
};