/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n;
        while(l<=r){
            int mid1 = l + (r-l)/3;
            int mid2 = r - (r-l)/3;
            int g1 = guess(mid1);
            int g2 = guess(mid2);
            
            if(g1==0)
                return mid1;
            if(g2==0)
                return mid2;
            else if(g1<0){
                r = mid1 - 1;
            }else if(g2>0){
                l = mid2 + 1;
            }else{
                l = mid1 + 1;
                r = mid2 -1;
            }
        }
        return -1;
    }
};