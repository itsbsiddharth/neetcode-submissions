class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(i<n && nums[i]==target) return i;
        
        return -1;
    }
};

