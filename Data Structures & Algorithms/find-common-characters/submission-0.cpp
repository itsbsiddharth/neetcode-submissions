class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>minf(26,100);
        for(string w:words){
            vector<int>cnt(26,0);
            for(char c:w){cnt[c-'a']++;}
            for(int i=0;i<26;i++){minf[i]=min(minf[i],cnt[i]);}
        }
        vector<string>balrightttt;
        for(int i=0;i<26;i++){
            while (minf[i]-- >0) balrightttt.push_back(string(1,i+'a'));
        }
        return balrightttt;
    }
};