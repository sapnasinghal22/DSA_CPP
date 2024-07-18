// leetcode:2125
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        int result=0;
        for(auto& row :bank)
        {
            // get the number of laser devices in a row 
            int curr = count(row.begin(),row.end(),'1');
            // skip the row with no laser
            if(curr==0)
            {
                continue;
            }
            result += curr*prev;
            prev=curr;

        }
        return result;
        
    }
};
