
#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

struct node *push(struct node *top, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }

    return top;
};

struct node *pop(struct node *top)
{
    printf("%d ",top->data);
    top = top->next;
    return top;
};

void print(struct node *top)
{
    struct node *p = top;

    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }

    printf("\n");
}


int main()
{
    int n;
    int t;

    scanf("%d",&n);

    int c;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c);
        if(c == 1)
        {
            scanf("%d",&t);
            top = push(top,t);
        }
        else if(c == 2)
        {
            top = pop(top);
        }
    }

    print(top);

    return 0;
}
