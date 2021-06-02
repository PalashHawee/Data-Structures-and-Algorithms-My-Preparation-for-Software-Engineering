//Deleting Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 printf("%d ",p->data);

 }
}
int count(struct Node *p)
{
	int l=0;
	while(p)
	{
		l++;
		p=p->next;
	}
	return l;
}
int Delete(struct Node *p,int index)
{
 struct Node *q=NULL;
 int x=-1,i;

 if(index < 1 || index > count(p))
 return -1;
 if(index==1) //Deleting node at first position
 {
 q=first;
 x=first->data;
 first=first->next;
 free(q);
 return x;
 }
 else //Deleting node at given positon
 {
 for(i=0;i<index-1;i++)
 {
 q=p;
 p=p->next;
 }
 q->next=p->next;
 x=p->data;
 free(p);
 return x;

 }


}
int main()
{

 int A[]={10,20,30,40,50};
 create(A,5);

 printf("%d\n",Delete(first,2));
 Display(first);

 return 0;
}

//Min time O(1) & Max time O(n)