class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for(auto email : emails){
            string local;
            for(auto c : email){
                if(c=='+' || c=='@') break;
                if(c=='.') continue;
                local += c;
            }
            st.insert(local + email.substr(email.find('@')));
        }
        return st.size();
    }
};