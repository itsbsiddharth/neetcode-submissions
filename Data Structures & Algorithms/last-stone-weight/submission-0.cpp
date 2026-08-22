class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int n=s.size();
        while(s.size()>1){
            sort(s.begin(),s.end());
            int y=s.back();
            s.pop_back();
            int x=s.back();
            s.pop_back();
            if(y>x){
                s.push_back(y-x);
            }
        }
        if(s.empty()){
            return 0;
        }
        return s[0];
    }
};
