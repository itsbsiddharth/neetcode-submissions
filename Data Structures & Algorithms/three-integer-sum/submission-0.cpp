class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i]){continue;}
            int l=i+1,r=n-1;
            int target=-1*nums[i];
            while(l<r){
                // cout<<endl;
                // cout<<i<<" "<<l<<" "<<r<<" :";
                int threesum=nums[l]+nums[r];
                if(threesum>target){r--;if( nums[r+1]==nums[r]){r--;} }
                else if(threesum<target){
                    l++;
                    while(nums[l-1]==nums[l]&& l<r){
                        l++;
                    }// no same set of numbers needed so we dont want same n[l] again as we will run into same answer so skip..l++ ,                r will auto matically skip.
                    }
                else{ 
                    ans.push_back({nums[i],nums[l],nums[r]}); 
                    //  cout<<"ans found"<<i<<l<<r<<endl; 
                    l++;
                    while(nums[l-1]==nums[l]&& l<r){
                        l++;
                    }
                     }
            }
            // cout<<endl;
        }
            return ans;
    }
};

