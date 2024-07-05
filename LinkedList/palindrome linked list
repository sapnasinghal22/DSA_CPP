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
    ListNode * middle(ListNode*head){
        ListNode * slow = head;
        ListNode* fast = head;
        while(fast->next != NULL)
        {
            fast = fast->next;
            if(fast->next !=NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode* reverse(ListNode * head2)
    {
        ListNode * prev = NULL;
        ListNode * curr = head2;
        while(curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }        
        return prev;
    }

    bool compare(ListNode * head,ListNode * head2)
    {
        ListNode * first = head;
        ListNode * second = head2;
        while(first != NULL && second != NULL)
        {
            if(first-> val != second-> val)
            {
                return false;
            }
            else{
                first = first->next;
                second = second -> next;
            }
        }
        return true;

    }
    bool isPalindrome(ListNode* head) {
        // find middle 
        ListNode * mid = middle(head);
       

        // break i nto two halfs
        ListNode* head2 = mid->next;
        mid->next = NULL;

        // reverse second list
        head2 = reverse(head2);

        // compare both list
        bool ans = compare(head,head2);
        return ans ;
        
    }
};
