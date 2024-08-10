class Solution {
public:
void rec(vector<char>&s ,int l, int e )
{
    if(l>=e)
    {
        return ;
    }
    swap(s[l],s[e]);
    rec(s,l+1,e-1);
}
    void reverseString(vector<char>& s) {
        int l=0;
        int e = s.size()-1;
        return rec(s,l,e);
        
    }
};
