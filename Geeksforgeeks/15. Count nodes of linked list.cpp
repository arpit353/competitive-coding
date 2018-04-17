int getCount(struct node* head){

int k = 0;

Node* trav = head;

while(trav != NULL)
{
    k++;
    trav = trav->next;
}

return k;

}

