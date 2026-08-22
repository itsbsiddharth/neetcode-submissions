class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, maxL=1;
        if(s.size()==0){return 0;}
        unordered_set<char> st;
        for(int r=0;r<s.size();r++){
                while( st.find(s[r]) != st.end() ){
                    st.erase(s[l]);
                    l++;
                }
            st.insert(s[r]);
            maxL = max(maxL, r-l+1);
        }
    return maxL;
    }

};

// paw rkw abcd not okay l=