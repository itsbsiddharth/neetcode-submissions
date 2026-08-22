class Solution {
public:
    void fill(vector<int>&nums , vector<int>vis, vector<int>curr,vector<vector<int>>&ans){
        for(int i=0;i<nums.size();i++){
            if(vis[i]==1) continue;
            vis[i]=1;
            curr.push_back(nums[i]);
            fill(nums,vis,curr,ans);
            curr.pop_back();
            vis[i]=0;
        }
        if(curr.size()==nums.size()) ans.push_back(curr);return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>vis(n),curr;
        fill(nums,vis, curr, ans);
        return ans;
    }
};
