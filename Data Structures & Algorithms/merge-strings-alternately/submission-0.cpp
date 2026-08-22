class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n1=word1.size(),n2=word2.size();
        int l=0,m=0;
        while(l<n1 || m<n2){
            cout<<l<< " "<< m<<endl;
            if(l<n1){ans+=word1[l];l++;}
            if(m<n2){ans+=word2[m];m++;}
        }
        return ans;
    }
};