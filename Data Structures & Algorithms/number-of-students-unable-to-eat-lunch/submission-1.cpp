class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sw) {
        vector<int>ct(2,0);
        for(int pref : students){
            ct[pref]++;
        }
        
        for(int type : sw){
            if(ct[type]>0){ct[type]--;}
            else break;
        }
        return ct[0]+ct[1];

    }
};