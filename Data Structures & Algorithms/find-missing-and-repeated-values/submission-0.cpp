class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int s=0,as=0,balright=0;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                s+=grid[i][j];
                if(mp.find(grid[i][j])!=mp.end()){
                    ans.push_back(grid[i][j]);
                }
                mp[grid[i][j]]++;
            }
        }
        n=n*n;
        as= n*(n+1)/2;
        // cout<<as<<" "<<s<<" "<<s-ans[0]<<endl;
        ans.push_back(as-(s-ans[0]));
        return ans;
    }
};