#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};
struct node*head=NULL,*temp;
struct node *creation(int value,struct node *head)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->link=NULL;
    if (head==NULL)
    {
        head=new;
    }
    else
    {
        temp=head;
        while (temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
    return head;
}

void delete_pos(int pos)
{
    struct node*temp1;
    temp=head;
    //1temp1=head;
    if(pos==0)
    {
        head=head->link;
        free(head);
    }
    else{
    for (int i = 1; i < pos; i++)
    {
        temp1=temp;
        temp=temp->link;
    }

    temp1->link=temp->link;
    free(temp);
    }
}

void display()
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t->\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    }
}


void main()
{
    int ch,value,pos;
    while (1)
    {
        printf("\n1:creating linked list\n2:delete_pos\n3:display\n4:exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 : printf("Enter the value");
                 scanf("%d",&value);
                 head=creation(value,head);
            break;
        
        case 2 : printf("Enter position");
                 scanf("%d",&pos);
                 delete_pos(pos);
            break;

        case 3 : display();
             break;

        case 4 : exit(0);
        }
    }
    
}