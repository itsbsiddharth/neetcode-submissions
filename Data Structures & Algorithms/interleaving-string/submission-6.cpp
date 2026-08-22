class Solution {
   public:

    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size(),n2=s2.size(),n3=s3.size();
        if(n1+n2!=n3) return false;

        vector<bool>dp(n2+1,false);

        for(int i=n1;i>=0;i--){
            int right=false;
            for(int j=n2;j>=0;j--){
                if(i==n1 && j==n2 ) {right =true;dp[n2]=true;continue;}
                               
                bool f=false;

                if(i<n1 && s1[i]==s3[i+j]) f= dp[j];
                if(j<n2 && s2[j]==s3[i+j]) f= f || right; 

                right = f;
                dp[j]=f;
            }
        }

        return dp[0];
    }   
};

//-1 not vis , 1 true, 0 false
