class Solution {
public:
    string reverseWords(string s) {
        stack<string> st ;
        string str="";
        string ans ="";
        int n = s.length();
        for(int i =0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(!str.empty())
                {
                    st.push(str);
                    str="";

                }
               
            }
            else{
                str += s[i];
            }
        }
        if(!str.empty())
        {
            st.push(str);
        }
        while(st.size()!=0)
        {
            if(st.size()==1)
            {
                ans += st.top();
                st.pop();
                break;
            }
            ans += st.top();
            ans += " ";
            st.pop();
        }
        return ans ;
        
    }
};


//input :- "the sky is blue"
//output:- "blue is sky the"
