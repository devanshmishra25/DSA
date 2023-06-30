class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int siz = nums.size();
        sort(nums.begin(), nums.end());
        
        if (siz <= 2)
            return -1;
        
        for (int i = 1; i < siz - 1; i++) {
            if (nums[i] != nums[0] && nums[i] != nums[siz - 1])
                return nums[i];
        }
        
        return -1; // If no such number is found
    }
};