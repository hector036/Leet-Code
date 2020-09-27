class Solution {
public:
    bool isVawel(char c){
            return (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')? true : false;
        }
    string reverseVowels(string s) {
        int l = 0, r = s.length();
        
        while(l<r){
            if(isVawel(s[l]) && isVawel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(!isVawel(s[l])){
                l++;
            }else if(!isVawel(s[r])){
                r--;
            }
        }
        return s;
    }
};