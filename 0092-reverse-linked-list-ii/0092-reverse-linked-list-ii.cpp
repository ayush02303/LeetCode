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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        // Dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        // Move prev to the node just before 'left'
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Reverse the sublist between left and right
        ListNode* curr = prev->next;
        ListNode* next = nullptr;
        ListNode* temp = nullptr;

        // Standard reverse linked list loop for (right - left) iterations
        for (int i = 0; i < right - left; i++) {
            next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }

        // Return the updated list
        return dummy->next;
        


        
    }
};