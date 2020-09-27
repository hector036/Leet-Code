// This problem can be solved using hashmap so I put it in Hash table folder

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-2;){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }else{
                i += 2;
            }
        }
        return nums[n-1];
    }
};