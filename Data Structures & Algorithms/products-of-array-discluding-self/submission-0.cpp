class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int final=1,finalnonzero=1;
        int numberofzeros=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            final*=nums[i];
            if(nums[i]==0){numberofzeros++;}else{
                finalnonzero*=nums[i];
            }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){ans.push_back(final/nums[i]);}
            else{
                if(numberofzeros==1){
                ans.push_back(finalnonzero);
                }else{
                    ans.push_back(final);
                }
                }
        }
        return ans;
    }
};
