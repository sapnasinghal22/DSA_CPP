// leetcode:- 374
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low =1;
     
        int high =n;
        int mid =low+(high-low)/2;
        while(low<=high)
        {
           int  res = guess(mid);
            if(res==0)
            {
                return mid;
            }
            else if(res==1)
            {
                low = mid+1;
            }
            else{
                high=mid-1;
            }
            mid = low+(high-low)/2;
        }
        return -1 ;
    }
};

// You call a pre-defined API int guess(int num), which returns three possible results:

// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).
// Return the number that I picked.
// Input: n = 10, pick = 6
// Output: 6
