#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/
int length(node * temp1)
{
	int c=0;
	while(temp1 != NULL)
	{
		c++;
		temp1 = temp1->next;
	}
	return c;
}

node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	node * temp = head;
	int len = length(temp);
	int start =0;
	start= len - k;
	if(start == 0)
	{
		return head;
	}
	for(int i=0;i<start;i++)
	{
		if(temp->next != NULL){
			temp=temp->next;
		}
		
	}
	return temp;

}
