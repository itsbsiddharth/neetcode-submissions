class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        vector<pair<int, string>> v;
        int n=h.size();
        for(int i=0;i<n;i++){
            v.push_back({h[i],names[i]});
        }
        sort(v.rbegin(),v.rend());

        vector<string> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=v[i].second;
        }
        return ans;
    }
};