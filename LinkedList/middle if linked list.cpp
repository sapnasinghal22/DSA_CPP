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
    ListNode* middleNode(ListNode* head) {
    //     ListNode * slow= head;
    //     ListNode * fast= head;
    //     while(fast != NULL)
    //     {
    //         fast = fast -> next;
    //         if(fast != NULL)
    //         {
    //             fast= fast-> next;
    //             slow = slow-> next;

    //         }
    //     }
    //     return slow;
        
    // }
    int n =0;
    ListNode * len = head;
    while(len != NULL)
    {
        n++;
        len = len -> next;
    }
    int pos = n/2 +1;
    int curr=1;
    ListNode* temp = head;
    while(curr != pos)
    {
        temp = temp-> next;
        curr++;
    }
    return temp;
    }
    
};
