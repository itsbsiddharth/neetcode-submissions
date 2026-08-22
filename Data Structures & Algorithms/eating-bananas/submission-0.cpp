class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=0;
        for(auto val:piles){ mx=max(mx,val); }
        int k=mx;
        int lo=1,hi=mx;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            long long t=0;
            // cout<<"mid="<<mid;
            for(int i=0;i<n;i++){
            //    t+= piles[i]/mid ;
            //    if(piles[i]%mid !=0){t++;}
        //    t+= piles+mid/mid
               t+=ceil( (piles[i]*1.0)/mid );
            //    cout<<t<<" ";
            }
            // cout<<mid<<" "<<t<<endl;
            if(t>h){lo=mid+1;}
            else{ 
                k=min(k,mid); hi=k-1;
                }
        }
        return k;
    }
};