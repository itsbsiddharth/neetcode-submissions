class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }

        multimap<int,int>mmp;
        for(auto pr:ump){
            mmp.insert({-1*pr.second,pr.first});
            cout<<"ump"<<pr.first<<" "<<pr.second<<endl;
        }
        int i=0;
        for(auto pr:mmp){
            if(i==k){break;}
            ans.push_back(pr.second);
            i++;
            // cout<<"mmp"<<pr.first<<"  "<<pr.second<<endl;
        }
        return ans;
    }
};