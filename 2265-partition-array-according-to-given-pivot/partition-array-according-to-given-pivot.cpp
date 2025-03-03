class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> smaller,larger,ans;
        int pivotCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot)
                smaller.push_back(nums[i]);
            else if(nums[i]>pivot)                
                larger.push_back(nums[i]);
            else
                pivotCount++;
        }
        int j=0;
        while(j<smaller.size()){
            ans.push_back(smaller[j]);
            j++;
        }

        while(pivotCount){
            ans.push_back(pivot);
            pivotCount--;
        }

        j=0;
        while(j<larger.size()){
            ans.push_back(larger[j]);
            j++;
        }
        return ans;
    }
};