class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        int mxsum=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            int sum=a[i];
            for(int j=i+1;j<n;j++){
                if(a[j-1]<a[j]){sum+=a[j];}
                else{break;}
            }
            mxsum=max(sum,mxsum);
        }
        return mxsum;
    }
};