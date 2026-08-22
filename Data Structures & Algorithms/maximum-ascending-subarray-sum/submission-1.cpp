class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        int msum=a[0],sum=a[0];
        int n=a.size();
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){sum+=a[i];msum=max(msum,sum);}
            else{sum=a[i];}
        }
        return msum;
    }
};