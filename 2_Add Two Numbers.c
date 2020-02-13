/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


typedef struct ListNode ListNode;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int l1_val,l2_val;
    int count=0;
    int Add=0;
    int carry=0;
    struct ListNode* List3 = NULL;
    struct ListNode* temp;
    struct ListNode* temp2;
    while((l1!= NULL) | (l2!= NULL))
    {
        count++;
        l1_val= (l1!= NULL)? l1->val: 0;
        l2_val= (l2!= NULL)? l2->val: 0;
        Add= carry + l1_val + l2_val;
        carry=Add/10;
        Add=Add%10;
        if(count == 1)
        {
            temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val=Add;
            temp->next=NULL;
            List3=temp;
            temp2=temp;
        }
        else
        {
            temp= (ListNode*)malloc(sizeof(ListNode));
            temp->val=Add;
            temp->next=NULL;
            while(List3->next!=NULL)
            {
                List3=List3->next;
            }
            List3->next=temp;
        }
        if(l1!=NULL) l1=l1->next;
        if(l2!=NULL) l2=l2->next;
    }

    if(carry > 0)
    {
        temp= (ListNode*)malloc(sizeof(ListNode));
        temp->val=carry;
        temp->next=NULL;
        while(List3->next!=NULL)
        {
               List3=List3->next;
        }
        List3->next=temp;
    }
return temp2;
}

