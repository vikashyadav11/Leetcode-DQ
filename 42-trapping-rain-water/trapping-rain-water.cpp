class Solution {
public:
    int trap(vector<int>& height) {
        //shradha kapra
        int ans=0;
        int l=0,r=height.size()-1;//left and right pointers
        int lmax=0,rmax=0;//variables to track max height at both the sides

        while(l<r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);

            if(lmax<rmax){//lmax will be deciding factor for water stored
                ans+=lmax-height[l];
                l++;
            }
            else{//rmax will be deciding factor
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};