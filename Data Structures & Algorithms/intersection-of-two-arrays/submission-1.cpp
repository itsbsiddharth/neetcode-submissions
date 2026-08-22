class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(1001),ans;
        for(auto val:nums1){
            v[val]=1;
        }
        for(auto val:nums2){
            if(v[val]==1){ans.push_back(val);v[val]=0;}
        }
        return ans;
        
    }
};