class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt=0;
        map<char,int> mp;
        for(int i = 0;i<J.length();i++){
            mp[J[i]]++;
        }
        for(int i=0;i<S.length();i++){
            if(mp.count(S[i])){
                cnt++;
            }
        }
        return cnt;
    }
};