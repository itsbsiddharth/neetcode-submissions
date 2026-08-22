class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0,hi=n-1,i=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[n-1]){
                lo=mid+1;
            }else{
                i=mid;
                hi=mid-1;
            }
        }
        int j=0;
        if(target<=nums[n-1] && target>=nums[i]){
            j= lower_bound(nums.begin()+i,nums.end(),target)-nums.begin();
            return (nums[j]==target  ? j : -1);
        }else{
            j= lower_bound(nums.begin(),nums.begin()+i,target)-nums.begin();
            return (nums[j]==target  ? j : -1);
        }
    }
};


//first false;
