class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ct(n*n+1,0),ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val=grid[i][j];
                ct[val]++;
                if(ct[val]==2){ans.push_back(val);}
            }
        }
        for(int i=1;i<=n*n;i++){
            if(ct[i]==0){ans.push_back(i);}
        }
        return ans;
    }
};