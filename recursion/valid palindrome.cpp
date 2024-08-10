class Solution {
public:
bool rec(string & ans ,int l,int h )
{
    if(l>=h)
    {
        return true;
    }
    if(ans[l]!=ans[h])
    {
        return false;
    }
    return rec(ans,l+1,h-1);
}
    bool isPalindrome(string s) {
        string ans ;
                int l=0;
       
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                ans +=tolower(s[i]);
            }
        }
        int h = ans.size()-1;
        if(h<=0)
        {
            return true;
        }

        return rec(ans , l, h);
        
    }
};
// t.c :- o(n)
// s.c :- o(n)
