class Solution {
public:
    string addStrings(string num1, string num2) {
        int l1 = num1.size()-1;
        int l2 = num2.size()-1;
        int carry = 0;
        string str="";
        while(l1>=0 || l2>=0){
            int x1 = l1>=0? num1[l1] - '0' : 0;
            int x2 = l2>=0? num2[l2] - '0' : 0;
            int val = (x1+x2+carry)%10;
            carry = (x1+x2+carry)/10;
            str += to_string(val);
            l1--;
            l2--;
        }
        
        if(carry!=0)
            str += to_string(carry);
        reverse(str.begin(),str.end());
        return str;
    }
};