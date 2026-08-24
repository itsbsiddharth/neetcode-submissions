
class Solution {
public:
    bool valid(int mid, vector<int>& weights, int days){
        int ct=1,sum=0;
        for(int i=0;i<weights.size();i++){

            if(sum+weights[i]>mid){
                ct++;sum=weights[i];
            }else{
                sum+=weights[i];
            }
        }
        return ct<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        // or ffffffftttttttbinary search on the weight limit?
        int lo=0,hi=0,ans=0;
        for(int i=0;i<weights.size();i++){
            lo=max(weights[i],lo);
            hi+=weights[i];
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(valid(mid,weights,days)){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }

        return ans;

    }
};