Node* reverse(Node *head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* nex = head->next;

    while(curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = nex;
        if(curr != NULL)
            nex = curr->next;
    }

    return prev;
}
