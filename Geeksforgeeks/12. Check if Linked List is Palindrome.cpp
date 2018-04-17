bool isPalindrome(Node *head)
{
    stack<int> s;

    Node *trav = head;

    while(trav != NULL)
    {
        s.push(trav->data);
        trav = trav->next;
    }

    trav = head;

    while(trav->data == s.top())
    {
        s.pop();
        trav = trav->next;
    }

    if(s.size() >0)
    {
        return false;
    }
    else
    {
        return true;
    }

}
