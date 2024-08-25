*/
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> ans ;
        Node * a = root1;
        Node * b = root2;
        stack<Node*> st1,st2;
        while(a||b||!st1.empty() || !st2.empty())
        {
            while(a)
            {
                st1.push(a);
                a=a->left;
            }
            while(b)
            {
                st2.push(b);
                b=b->right;
            }
          
            if(st2.empty() || (!st1.empty()&& st1.top()->data<= st2.top()->data))
            {
                a = st1.top();
            st1.pop();
            ans.push_back(a->data);
            a = a->right; 
            }
            else{
                  b = st2.top();
            st2.pop();
            ans.push_back(b->data);
            b = b->right; 
                
            }
        }
        return ans ;
    }
};

        /// cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends
