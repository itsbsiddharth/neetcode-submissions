class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<int,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]='a'+i;
        }

        for(int i=0;i<words.size();i++){
            string s="";
            for(auto ch:words[i]){
                s+=mp[ch];
            }
            words[i]=s;
        
            if(i>=1 && words[i-1]>words[i]){return false;}
        }

        return true;

    }
};

