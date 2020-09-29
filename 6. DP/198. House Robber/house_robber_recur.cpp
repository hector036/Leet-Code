class Solution {
public:
    int rob(vector<int>& nums) {
        return robb(nums.size()-1,nums);
    }
    
    int robb(int i,vector<int>& nums){
        if(i<0)
            return 0;
        return max(robb(i-2,nums)+nums[i],robb(i-1,nums));
    }
};