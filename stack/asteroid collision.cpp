class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        bool isdestroyed = false;
        stack<int> st;
        vector<int> ans ;
   
        for(int ast : asteroids)
        {
            isdestroyed = false;
            while(!st.empty() && st.top()>0 && ast<0)
            {
                if(st.top()== -ast)
                {
                    st.pop();
                    isdestroyed = true;
                    break;
                }
                else if(st.top() < abs(ast))
                {
                    st.pop();
                }
                else{
                    isdestroyed = true;
                    break;
                }
            }
            
                 if(!isdestroyed)
                    {
                        st.push(ast);

                    }   
            
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans ;

        
    }
};
