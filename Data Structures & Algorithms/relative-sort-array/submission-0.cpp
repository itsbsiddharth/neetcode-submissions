class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a, vector<int>& b) {
        int n=a.size(),m=b.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<m;i++){
            int ct=mp[b[i]];
            while(ct--){
                ans.push_back(b[i]);
            }
            mp[b[i]]=0;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(mp[a[i]]!=0){
                ans.push_back(a[i]);
            }
        }


        return ans;
        
    }
};