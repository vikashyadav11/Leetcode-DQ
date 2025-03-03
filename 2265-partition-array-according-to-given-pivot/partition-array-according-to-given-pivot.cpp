class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int len=nums.size();//store the length of the array
        vector<int>res(len);
        int cnt=0;
        int pt=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]<pivot)
            {
                res[pt++]=nums[i];
                //pt++;
            }
            else if(nums[i]==pivot)
            {
                cnt++;// when equal 
            }
        }
        while(cnt--)
        {
            res[pt++]=pivot;//equal to pivot
        }
        for(int i=0;i<len;i++)
        {
            if(nums[i]>pivot)
            {
                res[pt]=nums[i];
                pt++;
            }
        }
        return res;   
    }
};