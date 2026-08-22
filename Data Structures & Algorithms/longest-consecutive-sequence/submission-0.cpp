class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
            unordered_set<int> numset(nums.begin(),nums.end());
            int ans=0;
            for(auto num:numset){
                if( numset.count(num-1) != 0 ){continue;}

                int ct=0;
                while(numset.count(num+ct) != 0){
                    ct++;
                }
                ans= max(ans,ct);
            }

            return ans;


    }
};

//see one note picture
// the start of the sequence dosent have a left neighbour
// try to visualize