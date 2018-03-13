/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        static int c = 0;

        ListNode *l3 = new ListNode(0);

        if(l1 == NULL && l2 == NULL)
        {
            if(c!=0)
            {
                l3->next = NULL;
                l3->val = c;
                return l3;
            }
            else
            {
                return l1;
            }
        }

        int a = 0;
        int b = 0;

        ListNode *n1,*n2;

        n1 = NULL;
        n2 = NULL;

        if(l1 != NULL)
        {
            a = l1->val;
            n1 = l1->next;
        }

        if(l2 != NULL)
        {
            b = l2->val;
            n2 = l2->next;
        }

        int temp = c+a+b;
        c = temp/10;

        l3->val = temp%10;
        l3->next = addTwoNumbers(n1,n2);

        c = 0;
        return l3;

    }
};
