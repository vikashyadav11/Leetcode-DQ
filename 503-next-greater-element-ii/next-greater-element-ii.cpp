class Solution {
public:
    
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N=nums.size();
        vector<int> ans(N);
        stack<int> s;
        for(int i=2*N-1;i>=0;i--){
            int curr=nums[i%N];
            while(s.size() && s.top()<=curr){
                s.pop();
            }
            if(i<N){
                if(s.empty())
                    ans[i]=-1;
                else
                    ans[i]=s.top();
            }
            s.push(curr);
        }
        return ans;
    }
};