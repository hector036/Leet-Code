class Solution {
public:
    bool checkRecord(string s) {
        bool a = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'A')
            {
                if (a)
                    return false;
                a = 1;
            }
            if (s[i] == 'L' && i < s.size() - 2 && s[i + 1] == 'L' && s[i + 2] == 'L')
                return false;
        }
        return true;
    }
};