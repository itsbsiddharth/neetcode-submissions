class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string,vector<int> > mp;

        vector<string>str = strs;
        for(int i=0;i<strs.size();i++){
            sort(str[i].begin(),str[i].end()); // dont need to store it just sort it.. 
            mp[str[i]].push_back(i);
        } 

        for(auto pr:mp){
            vector<int> temp = pr.second;

            vector<string> temps(temp.size());// define the size before..
            for(int i=0;i<temp.size();i++){
                temps[i]=strs[temp[i]];
            }
            anagrams.push_back(temps);
        }

        return anagrams;
    }
};