class Solution {
public:
    int maxDifference(string s) {
        vector<int>v(27);
        int n=s.size();
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        int o=INT_MIN,e=INT_MAX;
        for(int i=0;i<26;i++){
            if(v[i]==0){continue;}
            if(v[i]%2==0){e=min(e,v[i]);}
            else{o=max(o,v[i]);}
        }
        return o-e;
    }
};