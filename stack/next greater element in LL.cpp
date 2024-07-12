/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ll ;
        while(head)
        {
            ll.push_back(head->val);
            head=head->next;
        }
        stack<int> st;
        vector<int> ans (ll.size()); //by default it initialize by 0
        for(int i =0;i<ll.size();i++)
        {
            while(!st.empty() && ll[i]>ll[st.top()])
            {
                int greater = ll[i];
                
                ans[st.top()]=greater ;
                st.pop();
            }
            st.push(i);
        }
        return ans ;
        
    }
};

// t.c :- o(n)
// s.c. :- o(n)
