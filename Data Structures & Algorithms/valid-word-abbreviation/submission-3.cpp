class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n=word.size(),m=abbr.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(abbr[j]>='a' && abbr[j]<='z'){if(abbr[j]!=word[i])return false;j++;i++;}
            else{
                int ij=j;//initialj
                int num=0;
                if(abbr[j]=='0') {return false;}
                while(j<m && abbr[j]>='0' && abbr[j]<='9'){
                    num*=10;
                    num+=abbr[j]-'0';
                    j++;
                }
                if(j>m){i+=num;if(i==n)return true;}

                i+=num;
                cout<<i<<" "<<num<<endl;
                if(i>n){return false;}
            }
        }
        return i==n && j==m;
    }
};