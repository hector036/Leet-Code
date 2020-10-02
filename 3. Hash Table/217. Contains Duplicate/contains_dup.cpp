class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        
        for(int val : nums){
            if(st.count(val)>0) return true;
            st.insert(val);
        }
        return false;
    }
};