class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        unordered_map<int,int>mp,mpp;
        for(auto val:nums1){mp[val]=1;}
        for(auto val:nums2){mpp[val]=1;}

        vector<int>a,b;
        for(auto val:nums1){
            if(mpp.find(val)==mpp.end()){
                a.push_back(val);
            }
            mpp[val]=1;
        }
        for(auto val:nums2){
            if(mp.find(val)==mp.end()){
                b.push_back(val);
            }
            mp[val]=1;
        }
        return {a,b};
    }
};