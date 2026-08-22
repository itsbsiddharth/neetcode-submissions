class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int x=0;x<=nums.size();x++){
            int ct=0;
            for(int n:nums){
                if(n>=x)ct++;
            }
            if(ct==x)return x;
        }
        return -1;
    }
};