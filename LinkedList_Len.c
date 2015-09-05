//iterative approach for finding the no. of elements
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
void push(struct node **head_ref,int new_data)
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node ));
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
void printList(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}
void count(struct node * n)
{
	int count =0;
	while(n!=NULL)
	{
		count+=1;
		n=n->next;
	}
	printf("%d\n",count);
}
int main()
{
	struct node * head=NULL;
	push(&head,5);
	push(&head,4);
	push(&head,7);
	count(head);
	printList(head);
}
