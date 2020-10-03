class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec;
        set<int> st;
        for(auto val : nums){
            st.insert(val);
        }
        for(int i = 1 ;i <= nums.size(); i++){
            if(st.count(i)==0) vec.push_back(i);
        }
        return vec;
    }
};