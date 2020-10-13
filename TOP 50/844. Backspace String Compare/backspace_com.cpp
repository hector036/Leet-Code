class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return build(S)==build(T);
    }
    string build(string s){
        stack<char> ans;
        string str;
        for(auto c : s){
            if(c!='#')
                ans.push(c);
            else if(!ans.empty()){
                ans.pop();
            }
        }
        while(!ans.empty()){
		    str.push_back(ans.top());
		    ans.pop();
	    }
        return str;
    }
};