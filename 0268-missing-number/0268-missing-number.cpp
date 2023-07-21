class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int S2 = 0;
        int S1 = (n*(n+1))/2;
        for(int i = 0; i<n; i++){
            S2 += nums[i];
        } 
        
        int missingNum = S1 - S2;
        return missingNum;
    }
};