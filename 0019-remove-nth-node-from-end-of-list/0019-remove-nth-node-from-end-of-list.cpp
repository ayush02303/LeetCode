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
        while(temp){
            count+=1; 
            temp = temp->next; 
        }
        temp = head; 
        if( count == n){
            ListNode* headNext = head->next; 
            delete head; 
            return headNext; 
        }
        int N  = count - n; 
        for( int i = 1 ; i < N ; i++){
            temp = temp->next; 
        }
        ListNode* deleteOne = temp->next; 
        temp->next = temp->next->next; 
        delete deleteOne; 
        return head; 
        
    }
};