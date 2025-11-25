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
        int count = 0 ; 
        while(temp){
            count+=1; 
            temp = temp->next; 
        }
        if( count == n ){
            ListNode* headNext = head->next; 
            delete head; 
            return headNext; 
        }

        temp = head; 
        int N = count - n; 

        for( int i = 1 ; i <  N ; i++){
            temp = temp->next; 

        }
        ListNode* nextNode = temp->next; 
        temp->next = temp->next->next; 
        delete nextNode; 
        return head; 

        
    }
};