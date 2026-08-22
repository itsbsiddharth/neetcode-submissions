class Solution {
public:
    bool isPalindrome(string a) {
        string s="";
        for(int i=0;i<a.size();i++){
            a[i]=tolower(a[i]);
            if(isalnum(a[i])){s+=a[i];}
        }
        string rs=s;
        reverse(rs.begin(),rs.end());
        return rs==s;
    }
};
