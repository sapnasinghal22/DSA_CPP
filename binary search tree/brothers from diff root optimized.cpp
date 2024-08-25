
//User function Template for C++

/*Structure of the Node of the BST is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    int countPairs(Node* root1, Node* root2, int x)
    {
        Node * a=root1;
        Node * b=root2;
        stack<Node*>st1,st2;
        int ans =0;
        while(1)
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
            if(st1.empty()||st2.empty())
            {
                break;
            }
            auto atop = st1.top();
            auto btop = st2.top();
            int sum = atop->data +btop->data;
            if(sum == x)
            {
                ans++;
                a=atop->right;
                b=btop->left;
                st1.pop();
                st2.pop();
            }
            else if (x<sum)
            {
                b = btop->left;
                st2.pop();
            }
            else{
                a=atop->right;
                st1.pop();
            }
        }
        return ans ;
 
    }
};


// } Driver Code Ends
