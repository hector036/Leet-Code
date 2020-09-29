class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        
        int pre2 = 0;
        int pre1 = nums[0];
        for(int i = 1;i<nums.size();i++){
            int sum = max(pre1, pre2 + nums[i]);
            pre2 = pre1;
            pre1 = sum;
        } 
        return pre1;
    }
};