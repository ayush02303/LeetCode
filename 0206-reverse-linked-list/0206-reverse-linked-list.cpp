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
    ListNode* reverseList(ListNode* head) {

        if( head == NULL || head->next == NULL) return head; 
        ListNode* prev = nullptr;   // previous node
        ListNode* curr = head;      // current node

        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;  // store next node
            curr->next = prev;                // reverse the link
            prev = curr;                      // move prev one step forward
            curr = nextTemp;                   // move curr one step forward
        }

        return prev;   // new head of the reversed list
    }
};
