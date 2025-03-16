class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxxArea=0;
        int p1=0,p2=n-1;
        while(p1<=p2){
            int area = (p2-p1) * min(height[p1],height[p2]);
            if(area>maxxArea)
                maxxArea=area;
            if(height[p1]>height[p2])
                p2--;
            else
                p1++;
        }
        return maxxArea;
    }
};