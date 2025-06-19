class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* node = head;
        for (int i = 0; i < k; ++i) {
            if (!node) return head;
            node = node->next;
        }

     
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int count = 0;
        while (count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
