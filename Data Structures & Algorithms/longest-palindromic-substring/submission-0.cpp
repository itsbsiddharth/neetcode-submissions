class Solution {
public:
    string longestPalindrome(string s) {
        int start=0,maxlen=0,n=s.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<=1;j++){
                int l=i,r=i+j;
                while(l>=0 && r<n && s[l]==s[r]){
                    if(r-l+1>maxlen){
                        start=l;
                        maxlen=r-l+1;
                    }
                    l--;r++;
                }
            }
        }
        return s.substr(start,maxlen);
    }
};
