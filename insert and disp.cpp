#include<stdio.h>
#include<malloc.h>
struct node
{
	int i;
	struct node*next;
}*start;
void inse(int d)
{
	struct node *temp,*q;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->i=d;
	temp->next=NULL;
	if(start==NULL)
		start=temp;
		else
		{
			for(q=start;q->next!=NULL;q=q->next);
			q->next=temp;
			return;
		}
}
void disp()
{
	struct node*q;
	if(start==NULL)
		return;
	else
	{
		for(q=start;q!=NULL;q=q->next)
			printf("%d",q->i);
	}
}
int main()
{
	int n,i,d;
	printf("enter the number of elemnts\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&d);
		inse(d);
	}
	disp();
}
