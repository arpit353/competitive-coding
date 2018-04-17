int detectloop(Node *head)
{
   Node* slow = head;
   Node* fast = head;

   int flag = 0;

   // In this question i was checking the fast->next == NULL inside the while loop in a if condition before advancing it.
   // That's why wrong answer was coming because it was never advancing beyond a stage. Hence we should always check the
   // Condition in while loop itself


   while(fast != NULL && fast->next != NULL)
   {
       slow = slow->next;

        fast = fast->next;
        fast = fast->next;

       if(slow == fast)
       {
           flag = 1;
           break;
       }
   }

   if(flag == 0)
   {
       return 0;
   }
   else
   {
       return 1;
   }
}
