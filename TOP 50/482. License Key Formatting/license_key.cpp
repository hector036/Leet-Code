class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string str = "";
        int cnt = 0;
        for(int i = S.size()-1;i>=0;i--){
            if(S[i]=='-') continue;
            if(cnt!=0 && cnt%K==0) str+="-";
            str += toupper(S[i]);
            cnt++;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};