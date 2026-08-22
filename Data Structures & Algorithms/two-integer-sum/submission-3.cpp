class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int at=target-nums[i];
            if(mp.find(at)!=mp.end()){
                return {mp[at],i};
            }
            mp[nums[i]]=i;
        }
        return {};

    }
};
