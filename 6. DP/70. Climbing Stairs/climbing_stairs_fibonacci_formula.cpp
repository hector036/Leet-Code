class Solution {
public:
    int climbStairs(int n) {
        float sqrt5 = sqrt(5);
        float fibn = pow((1+sqrt5)/2,n+1) - pow((1-sqrt5)/2,n+1);
        return (int)(fibn/sqrt5);
    }
};