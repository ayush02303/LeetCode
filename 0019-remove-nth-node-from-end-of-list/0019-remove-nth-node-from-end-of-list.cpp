/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0; 
        ListNode* temp = head; 

        while(temp != NULL){
            count+=1; 
            temp = temp->next; 
        }
        if( count ==  n ){
            ListNode* temp1 = head->next; 
            delete head; 
            return temp1; 
        }

        int length = count- n ; 
        temp = head; 

        for( int i = 1 ; i< length ; i++){
            temp = temp->next; 
        }
        ListNode* deleteNode  = temp->next; 
        temp->next = temp->next->next; 
        delete deleteNode; 
        return head; 


        
    }
};