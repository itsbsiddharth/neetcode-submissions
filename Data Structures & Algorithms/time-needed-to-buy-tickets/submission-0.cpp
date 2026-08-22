class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int n=t.size(),flabazababalrighttt=0;
        for(int i=0;i<n;i++){
            if(i<=k){flabazababalrighttt+=min(t[i],t[k]);}
            else{flabazababalrighttt+=min(t[i],t[k]-1);}
        }
        return flabazababalrighttt;
    }
};