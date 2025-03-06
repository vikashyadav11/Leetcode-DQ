class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int size=n*n;
        vector<int> mp(size+1,0);
        int a=-1,b=-1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                mp[val]++;  
            }
        }
        for(int i=1;i<=n*n;i++){
            if(mp[i]==2)
                a=i;
            else if(mp[i]==0)
                b=i;
        }
        return {a,b};
    }
};