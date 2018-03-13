#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *insert(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p = head;

        while(p->next != NULL)
        {
            p = p->next;
        }

        p->next = temp;
    }

    return head;
};

struct node *rotate(struct node *head, int k)
{
    struct node *p = head;

    for(int i=0;i<k-1;i++)
    {
        p = p->next;
    }

    struct node *temp = p->next;
    struct node *c  = temp;

    while(c->next != NULL)
        c = c->next;

    c->next = head;
    p->next = NULL;

    head = temp;

    return head;

};

void print(struct node *head)
{
    struct node *p = head;

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

    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        head = insert(head,t);
    }

    int k;
    scanf("%d",&k);

    print(head);

    head = rotate(head,k);

    printf("\n");

    print(head);
    return 0;
}

