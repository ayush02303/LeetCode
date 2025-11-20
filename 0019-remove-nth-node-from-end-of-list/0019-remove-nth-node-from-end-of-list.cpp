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
        ListNode* temp = head; 
        int count = 0; 
        while( temp!= NULL){
            temp = temp->next; 
            count+=1; 
        }
        if( count ==  n ){
            ListNode* temp1 = head->next; 
            delete head; 
            return temp1; 
        }

        temp = head; 
        int length = count - n ; 
        for( int i = 1 ; i< length ; i++){
            temp = temp->next; 
        }
        ListNode* deleteNode = temp->next; 
       
        temp->next = temp->next->next; 
         delete deleteNode;
        return head;
        
    }
};