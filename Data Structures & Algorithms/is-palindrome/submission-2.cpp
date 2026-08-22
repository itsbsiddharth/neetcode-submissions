class Solution {
public:
    bool isPalindrome(string a) {
        string s;
        for(int i=0;i<a.size();i++){
            if(a[i]>='a' && a[i]<='z'){s+=tolower(a[i]);}
            if(a[i]>='A' && a[i]<='Z'){s+=tolower(a[i]);}
            if(a[i]>='0' && a[i]<='9'){s+=a[i];}
        }
        string rs=s;
        reverse(s.begin(),s.end());
        return rs==s;
    }
};
