//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int rec(string s , int n , char p)
    {
        if(n<0)
        {
            return -1;
        }
        if(s[n]==p)
        {
            return n;
        }
        return rec(s,n-1,p);
    }
    
    int LastIndex(string s, char p){
        //complete the function here
        int n = s.size()-1;
        return rec(s,n,p);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends
