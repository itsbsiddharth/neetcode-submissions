class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int at=target-nums[i];
            if(mp.find(at)!=mp.end()){
                int a=min(mp[at],i);
                int b=max(mp[at],i);
                return {a,b};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};

    }
};
