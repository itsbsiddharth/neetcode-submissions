class Solution {
public:
    int search(vector<int>& nums, int t) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == t) {
                return i;
            }
        }
        return -1;
    }
};