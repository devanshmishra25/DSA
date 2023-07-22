class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                return mid; // Target found, return the index.
            } else if (target < nums[mid]) {
                high = mid - 1; // Search in the left half.
            } else {
                low = mid + 1; // Search in the right half.
            }
        }
        
        return -1; // Target not found, return -1.
    }
};
