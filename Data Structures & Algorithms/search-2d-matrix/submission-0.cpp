class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int r=0;
        for(int i=0;i<=m-1;i++){
            if(matrix[i][0]<=target && matrix[i][n-1]>=target){r=i;}
        }
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi -lo)/2;
            if(matrix[r][mid]<target){lo=mid+1;}
            else if(target<matrix[r][mid]){hi=mid-1;}
            else{return true;}
        }
        return false;        
    }
};