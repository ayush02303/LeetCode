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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head; 
        int count =0; 
        while( temp!= NULL){
            count+=1; 
            temp = temp->next; 
        } 
        int m = (count/2)+1; 

        temp = head; 
        while( temp!= NULL){
            m-=1; 
            if( m == 0) break; 
            temp = temp->next; 
        }
        return temp; 
    }
};