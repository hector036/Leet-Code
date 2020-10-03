class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1, st2;
        vector<int> vec;
        for(auto a:nums1) st1.insert(a);
        for(auto b:nums2) st2.insert(b);
        for(auto s : st1){
            if(st2.count(s)!=0) vec.push_back(s);
        }
        return vec;
    }
};