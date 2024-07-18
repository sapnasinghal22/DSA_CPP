// leetcode:-1209
// method1
class Solution {
public:
bool areLastK_1CharSame(string &ans,char & newch,int j)
{
    int it = ans.size()-1;
    for(int i=0;i<j;i++)
    {
        if(ans[it]!=newch)
        {
            return false;
        }
        it--;
    }
    return true;
}
    string removeDuplicates(string s, int k) {
        string ans ;
        for(int i=0;i<s.size();i++)
        {
            char &newch = s[i];
            if(ans.size()<k-1)
            {
                ans.push_back(newch);
            }
            else{
                if(areLastK_1CharSame(ans,newch,k-1))
                {
                    for(int j=0;j<k-1;j++)
                    {
                        ans.pop_back();
                    }
                }
                    else{
                        ans.push_back(newch);
                    }
                
            }
           
        }
        return ans ;
        
    }
};
