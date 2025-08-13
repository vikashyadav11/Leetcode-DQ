class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1,miniE=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
           
            if(arr[low]<arr[high])
                miniE=min(miniE,arr[low]);

            if(arr[mid]>=arr[low]){
                miniE=min(miniE,arr[low]);
                low=mid+1;
            }
            else{
                miniE=min(miniE,arr[mid]);
                high=mid-1;
            }
            
        }
        return miniE;
    }
};