class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0,j=0,n=word.size(),m=abbr.size();

        while(i<n && j<m){

            if(abbr[j]>='a' && abbr[j]<='z'){
                if(abbr[j]==word[i]){j++;i++;}
                else{return false;}
            }else{
                if(abbr[j]=='0'){return false;}

                int num=0;
                while(j<m && abbr[j]>='0' && abbr[j]<='9'){
                    num= num*10 + abbr[j]-'0';
                    j++;
                }
                i+=num;
            }

        }
        return i==n && j==m;
    }
};