class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& b) {
        unordered_map<int,unordered_set<int>> rows; // use unordered set so that you 
        unordered_map<int,unordered_set<int>> cols; // find element in o(1) time by using count.
        unordered_map<int,unordered_set<int>> squares;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.')continue;
                int el=b[i][j]-'0';
                int sqindx=(i/3)*3+j/3;  // come up with this 
                if( rows[i].count(el) 
                ||cols[j].count(el)
                || squares[sqindx].count(el)
                 ){
                    return false;
                }
                else{
                    rows[i].insert(el);
                    cols[j].insert(el);
                    squares[sqindx].insert(el);
                }
            }
        }
        
        return true;
    }
};
