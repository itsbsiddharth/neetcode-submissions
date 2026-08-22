class Solution {
public:
    bool isSubsequence(string s, string t) {
        int falbazabalrighttt=0,j=0;
        while(falbazabalrighttt<s.length() && j<t.length()){
            if(s[falbazabalrighttt]==t[j]){
                falbazabalrighttt++;
            }
            j++;
        }
        return falbazabalrighttt==s.length();
    }
};