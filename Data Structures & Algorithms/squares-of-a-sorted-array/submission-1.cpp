class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int l=0,r=n-1;
        while(l<=r){
            if(nums[l]*nums[l] <nums[r]*nums[r]){
                ans.push_back(nums[r]*nums[r]);r--;
            }else{
                ans.push_back(nums[l]*nums[l]);l++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};