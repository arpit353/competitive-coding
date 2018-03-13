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

struct node *reverse(struct node *head)
{
    if(head->next == NULL)
        return head;

    struct node *temp = reverse(head->next);

    head->next = NULL;

    struct node *p = temp;

    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next  = head;

    return temp;
};

void reverse_print(struct node *head)
{
    if(head == NULL)
        return ;

    reverse_print(head->next);

    printf("%d ",head->data);
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

    print(head);

    reverse_print(head);

    head = reverse(head);

    printf("\n");

    print(head);
    return 0;
}
