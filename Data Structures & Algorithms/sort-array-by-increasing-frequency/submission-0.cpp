class Solution {
public:
    static bool comp(pair<int,int>&a , pair<int,int> &b){
        if(a.first==b.first) return a.second>b.second;
        return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>v;
        unordered_map<int,int>mp;
        for(auto val:nums){
            mp[val]++;
        }

        for(auto [val,freq] : mp){
            v.push_back({freq,val});
        }

        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++){
                ans.push_back(v[i].second);
            }
        }

        return ans;
    }
};