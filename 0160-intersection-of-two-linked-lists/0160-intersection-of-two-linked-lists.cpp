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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int  a=0 ; 
        int b=0 ; 
         ListNode* curr = headA;

        while(curr)
        {
            a=a+1; 
            curr =  curr->next; 
        } 
        curr = headB; 

        while(curr)
        {
            b= b+1; 
            curr = curr->next;
        }

        int diff = abs(b-a); 

        if(a<b)
        {
            while(diff--)
            {
                headB = headB->next; 
            }
        }
        else
        {
            while(diff--)
            {
                headA = headA->next;
            }
        }

        while(headA and headB)
        {
            if(headA==headB)
            { return headA;}
            headA= headA->next; 
            headB = headB->next; 
            
        }
        return NULL;



        
    }
};