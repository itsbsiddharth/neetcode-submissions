class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int r=-1;
        int lo=0,hi=m-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(target<matrix[mid][0]){hi=mid-1;}
            else if(matrix[mid][n-1]<target){lo=mid+1;}
            else{ r=mid;break; }
        }
        if(r==-1){return false;}

        lo=0;hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi -lo)/2;
            if(matrix[r][mid]<target){lo=mid+1;}
            else if(target<matrix[r][mid]){hi=mid-1;}
            else{return true;}
        }
        return false;        
    }
};