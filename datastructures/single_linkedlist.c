#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;

struct node *create_sll(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("enter -1 to stop\nenter data:");
    scanf("%d",&num);
    while (num!=-1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        if (start==NULL)
        {
            new_node->next=NULL;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
                
            }
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("Enter the data:");
        scanf("%d",&num);
    }
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
main()
{
    start=create_sll(start);
    start=display(start);
}
