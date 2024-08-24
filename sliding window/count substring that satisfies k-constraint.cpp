// leetcode :- 3258
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count = 0;  // To count the number of valid substrings
        int count0 = 0; // To track the number of '0's in the current window
        int count1 = 0; // To track the number of '1's in the current window
        int r = 0;      // Right pointer
        int l = 0;      // Left pointer
        
        while (r < s.size()) {
            if (s[r] == '0') {
                count0++;
            } else if (s[r] == '1') {
                count1++;
            }

            // If the counts exceed k, move the left pointer to shrink the window
            while (count0 > k && count1 > k) {
                if (s[l] == '0') {
                    count0--;
                } else {
                    count1--;
                }
                l++;
            }

            // Add the number of valid substrings that end at r
            count += (r - l + 1);
            r++;
        }

        return count;
    }
};
