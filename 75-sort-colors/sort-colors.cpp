class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0,m=0,h=n-1;
        //0 to low-1 --> all 0s
        //low to mid-1 --> all 1s
        //high+1 to n-1 --> all 2s
        //mid to high --> unsorted part`
        while(m<=h){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                m++;
                l++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                //m++;
                h--;
            }
        }
    }
};