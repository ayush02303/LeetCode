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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smaller = new ListNode(0); 
        ListNode* larger = new ListNode(0); 

        ListNode* s1 = smaller; 
        ListNode* s2 = larger; 

        while( head!= NULL){
            if( head->val < x){
                s1->next = head; 
                s1 = s1->next; 
            }   
            else{
                s2->next = head; 
                s2 = s2->next;
            }
            head = head->next; 
        }
        s1->next = larger->next; 
        s2->next = NULL; 
        return smaller->next;

        
    }
};