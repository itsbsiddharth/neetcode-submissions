class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int l=0,r=n-1,i=n-1;
        while(l<=r){
            if(nums[l]*nums[l] <nums[r]*nums[r]){
                ans[i]=(nums[r]*nums[r]);r--;
            }else{
                ans[i]=(nums[l]*nums[l]);l++;
            }
            i--;
        }
        return ans;
    }
};