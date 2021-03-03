#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Creating a node
struct node
{
	int data;
	struct node *next;
};

int main()
{
	int ans;
	struct node *start=NULL, *last=NULL, *temp=NULL, *t, *f;
	clrscr();

                     //Traversing the node
	do
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the node data:");
		scanf("%d", &temp->data);
		temp->next=NULL;

		if(start==NULL)
		{
			start=temp;
			last=temp;
		}
		else
		{
			last->next=temp;
			last=last->next;
		}

		printf("Continue?");
		scanf("%d", &ans);

	}
	while(ans==1);

		printf("\t %d", t->data);
		t=t->next;

                                        //Inserting at the beginning of the Linked List
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter a node to add before the first node:");
		scanf("%d", &temp->data);
		temp->next=start;
		start=temp;

                                        //Inserting at the end of the Linked List
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter a node to add after the last node:");
		scanf("%d", &temp->data);
		temp->next=NULL;
		last->next=temp;
		last=last->next;
		printf("\n Linked list: ");
		t=start;

                                        //Deleting at the beginning of the Linked List
		while(t!=NULL)
		{
			printf("\t %d",t->data);
			t=t->next;
		}

		printf("\n Delete a node from the beginning of the list.\n");
		t=start;
		start=start->next;
		t->next=NULL;
                 
                                        //Deleting at the end of the Linked List
		if(start==NULL)
		{
			printf("UNDERFLOW \n");
		}
		else
		{
			t=start;
			while(t!=NULL)
			{
				printf("\t %d",t->data);
				t=t->next;
			}
		}

		printf("\n Delete a node from the end of the list.\n");

		if(start==NULL)
		{
			printf("UNDERFLOW \n");
		}
		else
		{
			t=start;
			while(t!=NULL)
			{
				f=t;
				t=t->next;
			}
			free(t);
			f->next=NULL;
		}

                                        //Printing the Linked List
		printf("\n Linked list: ");
		t=start;

		while(t!=NULL)
		{
			printf("\t %d",t->data);
			t=t->next;
		}

		getch();
		return 0;
}