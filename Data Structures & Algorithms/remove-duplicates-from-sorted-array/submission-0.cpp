class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            if(mp.find(nums[i]) ==mp.end()){mp[nums[i]]++; ans.push_back(nums[i]);}
        }
        nums=ans;

        return s.size();
    }
};