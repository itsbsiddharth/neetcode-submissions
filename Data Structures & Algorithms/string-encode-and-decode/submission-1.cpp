class Solution {
public:

    string encode(vector<string>& strs) {
        string ans ="";

        for(auto str:strs){
            ans+= to_string(str.size())+"#"+str;
        }
        cout<<ans<<endl;
        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;
        int sz=0;
        string temp="";
        int flag=0;
        for(int i=0;i<s.size();i++){
            temp+=s[i];
            if(s[i]=='#'&&flag==0){
                flag=1;
                sz=stoi(temp);temp="";
            }
            if(flag==1){
                string ds="";
                for(int j=i+1;j<=i+sz;j++){
                    ds+=s[j];
                }
                cout<<"ds="<<ds<<"sz="<<sz<<endl;
                    ans.push_back(ds);
                    flag=0;
                    i=i+sz;
                    sz=0;
            }
        }
    return ans; 
    }
};
