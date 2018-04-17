Node* addTwoLists(Node* first, Node* second)
{

    int carry = 0;

    Node* h = newNode(0);

    if(first != NULL)
        fdata = first->data;
    else
        fdata = 0;

    if(second != NULL)
        sdata = second->data;
    else
        sdata = 0;

    h->data = carry + fdata + sdata %10;
    carry = carry + fdata + sdata /10;
    h->next = NULL;
    Node* prev;

    prev = h;

    first = first->next;
    second = second->next;

    while(first != NULL && second != NULL)
    {
        Node* r = newNode(0);
        if(first != NULL)
            fdata = first->data;
        else
            fdata = 0;

        if(second != NULL)
            sdata = second->data;
        else
            sdata = 0;

        int d;
        d = carry + fdata + sdata %10;
        carry = carry + fdata + sdata /10;

        r->data = d;
        r->next = NULL;
        prev->next = r;
        prev= r;

        first = first->next;
        second = second->next;


    }

    return h;

}
