class Solution {
public:
    int rob(vector<int>& nums) {
        int memo[nums.size()+1];
        for(int i = 0;i<nums.size();i++) memo[i]=-1; 
        return robb(nums.size()-1,nums,memo);
    }
    
    int robb(int i,vector<int>& nums,int memo[]){
        if(i<0)
            return 0;
        if(memo[i]>=0){
            return memo[i];
        }
        memo[i] = max(robb(i-2,nums,memo)+nums[i],robb(i-1,nums,memo));
        return memo[i];
    }
};