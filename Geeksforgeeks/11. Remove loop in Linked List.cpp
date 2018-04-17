void removeTheLoop(Node *head)
{
    Node* ptr1 = head;
    Node* ptr2 = head;

    int flag = 0;

    while(ptr2 != NULL && ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;

        if(ptr1 == ptr2)
        {
            flag = 1;
            break;
        }
    }


    if(flag == 0)
        return ;

    int k=1;

    ptr2 = ptr2->next;

    while(ptr2 != ptr1)
    {
        k++;
        ptr2 = ptr2->next;
    }

    ptr1 = head;
    ptr2 = head;

    for(int i=0;i<k-1;i++)
        ptr2 = ptr2->next;

    while(ptr2->next != ptr1)
    {
        ptr2 = ptr->next;
        ptr1 = ptr1->next;
    }

    ptr2->next = NULL;

}

