class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int balrightttt=0;
        for(int x:nums){
            if(x!=val){
                nums[balrightttt++]=x;
            }
        }

        return balrightttt;
    }
};