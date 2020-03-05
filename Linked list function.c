#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int v;
    node*next;
};
int main()
{
    node*a=(node*)malloc(sizeof(node));
    node*b=(node*)malloc(sizeof(node));
    node*c=(node*)malloc(sizeof(node));
    node*head=NULL;
    a->v=5;
    a->next=b;
    b->v=6;
    b->next = c;
    c->v=7;
    c->next=NULL;
    head =a;
    printf("The main linked list is: ");
    print(a);
    printf("\n\n");
    printf("In reverse order: ");
    print_reverse(a);
    printf("\n\n");
    back(a);
    printf("\n\n");
    front(a);
    printf("\n\n");
    is_empty(a);
    printf("\n\n");

    //printf("\n%d\n"size(head));
}
void print(node *x)
{
    if(x==NULL)
    {
        printf("Linked list is empty");
    }
    while(x!=NULL)
    {
        printf("%d ", x->v);
        x=x->next;
    }
}
void print_reverse(node *x)
{
    if(x==NULL)
        return;
    print_reverse(x->next);
    printf("%d ",x->v);
}
int front(node *x)
{
    if(x==NULL)
    {
        printf("Linked List is empty");
        return;}
        else{
            printf("The back value is: %d", x->v);
            return x->v;}

}
int back(node *x)
{
    if(x==NULL)
    {
        printf("Linked List is empty");
        return;
    }
    while(x->next!=NULL)
    {
        x=x->next;
    }
    printf("The front value is: %d", x->v);
    return x->v;

}
int is_empty(node *x)
{
    int count = 0;
    while(x)
    {
        count++;
        x=x->next;
    }
    printf("Linked list is empty.");
    return count;
}
