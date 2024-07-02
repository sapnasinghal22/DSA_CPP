class Solution {
public:
    bool isValid(string s) {
        if(s[0]!= 'a')
        {
            return false;
        }
        stack<char> st;
        for(char ch :s)
        {
            if(ch =='a')
            {
                st.push(ch);
            }
            else if(!st.empty() && st.top()=='a' && ch == 'b')
            {
                st.push(ch);
            }
             else if(!st.empty() && st.top()=='b' && ch == 'c')
            {
                st.pop();
                st.pop();
            }
            else {
                return false;
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
        
    }
};
