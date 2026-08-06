class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;

            } else {
                return true;
            }
        }
        // nums.resize(i+1);
        return false;
    }
};