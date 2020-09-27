class Solution {
public:
    int mySqrt(int num) {
        if(num<2) return num;
        int l = 1, r = num;
        while(l<r){
            int mid = l + (r-l)/2;
            if(mid == num/mid){
                return mid;
            }else if(mid > num/mid){
                r = mid;
            }else {
                l = mid + 1;
            }
        }
        return l - 1;
    }
};