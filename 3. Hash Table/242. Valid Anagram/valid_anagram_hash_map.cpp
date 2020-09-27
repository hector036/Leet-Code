class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto c: mp){
            if(c.second!=0) return false;
        }
        return true;
    }
};