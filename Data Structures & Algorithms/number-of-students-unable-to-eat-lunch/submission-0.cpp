class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sw) {
        int n=students.size();
        int  m=sw.size();
        int ct0=0,ct1=0;
        for(int i=0;i<n;i++){
            if(students[i]==0)ct0++;
            if(students[i]==1)ct1++;
        }
        for(int i=0;i<m;i++){
            if(sw[i]==0 && ct0>0){
                ct0--;
            }else if(sw[i]==1 && ct1>0){
                ct1--;
            }else {
                break;
            }
        }
        return ct1+ct0;

    }
};