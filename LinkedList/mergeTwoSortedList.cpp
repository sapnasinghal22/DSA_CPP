
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans=new ListNode(-1);
        ListNode * mptr=ans;
        if(list1==0)
        {
            return list2;
        }
        if(list2==0)
        {
            return list1;
        }while(list1 && list2){
        if(list1->val<=list2->val)
        {
            mptr->next= list1;
            mptr=list1;
            list1=list1->next;
        }
        else{
            mptr->next=list2;
            mptr=list2;
            list2=list2->next;
        }

        }
        while(list1)
        {
            mptr->next=list1;
            mptr=list1;
            list1=list1->next;
        }
         while(list2)
        {
            mptr->next=list2;
            mptr=list2;
            list2=list2->next;
        }

        return ans->next;


        
    }
};

//input list1:- 1->2->5->6->8
// list2: 1->4->9
//output ans: 1->1->2->4->5->6->8->9
