class Solution {
   public:
    bool rec(string& s1, string& s2, string& s3, int i, int j, vector<vector<int>>& dp) {
        int n1 = s1.size(), n2 = s2.size(), n3 = s3.size(), k = i + j;
        if (k == n3) return true;
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        bool ans = false;
        if (i < n1 && s1[i] == s3[k] && j < n2 && s2[j] == s3[k])
            ans = (rec(s1, s2, s3, i + 1, j, dp) || rec(s1, s2, s3, i, j + 1, dp));

        else if (i < n1 && s1[i] == s3[k])
            ans = rec(s1, s2, s3, i + 1, j, dp);
        else if (j < n2 && s2[j] == s3[k])
            ans = rec(s1, s2, s3, i, j + 1, dp);

        return dp[i][j] = ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size()) return false;
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, -1));
        return rec(s1, s2, s3, 0, 0, dp);
    }
};

//-1 not vis , 1 true, 0 false
