class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int l=0,r=num.size()-1,n=num.size(),sum=0;

        while(l<r){
            sum=num[l]+num[r];
            if(sum>target){
                r--;
            }else if(sum<target){
                l++;
            }else{
                return {l+1,r+1};
            }
        }


return {};
    }
};