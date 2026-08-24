class Solution {
public:
    bool lexosorted(string word1, string word2,unordered_map<int,int>&mp){
        int n1=word1.size(),n2=word2.size();

        for(int i=0;i<max(n1,n2);i++){
            if(i==n1) return true;
            if(i==n2) return false;
            if(mp[word1[i]]>mp[word2[i]]) return false; 
            if(mp[word1[i]]<mp[word2[i]]) return true;
        }
        return true;
    }

    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<int,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }

        for(int i=1;i<words.size();i++){
            if(!lexosorted(words[i-1],words[i],mp)){return false;}
        }

        return true;

    }
};

