class Solution {
   public:

    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size(),n2=s2.size(),n3=s3.size();
        if(n1+n2!=n3) return false;
        vector<vector<bool>>dp(n1+1,vector<bool>(n2+1,false));
        dp[n1][n2]=true;

        for(int i=n1;i>=0;i--){
            for(int j=n2;j>=0;j--){
                if(i==n1 && j==n2 ) continue;

                
                bool f=false;

                if(i<n1 && s1[i]==s3[i+j]) f= dp[i+1][j];
                if(j<n2 && s2[j]==s3[i+j]) f= f || dp[i][j+1]; 

                dp[i][j]= dp[i][j] || f;
            }
        }

        return dp[0][0];
    }   
};

//-1 not vis , 1 true, 0 false
