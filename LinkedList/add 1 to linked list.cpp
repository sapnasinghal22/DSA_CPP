//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node * reverse(Node*&head)
    {
        Node * prev=NULL;
        Node * curr = head;
        while(curr != NULL)
        {
            Node * next = curr->next;
            curr->next = prev ;
            prev = curr;
            curr= next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        
        // reveerse
        head= reverse(head);
        
        //  add 1
        int carry =1;
        Node * temp = head;
        while(temp->next != NULL)
        {
            int totalsum = carry + temp->data;
            int digit = totalsum%10;
            carry = totalsum/10;
            temp->data = digit;
            temp=temp->next;
            if(carry ==0)
            {
                break;
            }
        }
        // process last node
        if(carry!=0)
        {
            int totalsum = temp->data+carry;
            int digit = totalsum %10;
            carry = totalsum/10;
            temp->data=digit;
            if(carry!=0)
            {
                Node * newNode = new Node(carry);
                temp->next=newNode;
            }
            
        }
        // reverse
        head = reverse(head);
        return head;
        
        
            }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
