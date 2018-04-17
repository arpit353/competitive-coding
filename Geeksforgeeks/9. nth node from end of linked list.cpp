int getNthFromLast(Node *head, int n)
{
       Node* curr = head;
       Node* trav = head;

       while(n>1)
       {
           trav = trav->next;
           n--;

           if(trav == NULL)
            return -1;

       }

       while(trav->next != NULL)
       {
           curr = curr->next;
           trav = trav->next;
       }

       return curr->data;
}
