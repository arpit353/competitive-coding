Node* deleteNode(Node *head,int x)
{
    Node* trav = head;

    for(int i=0;i<k-2;i++)
    {
        trav = trav->next;
    }

    trav->next = trav->next->next;

    return head;
}
