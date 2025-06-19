class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Check if there are at least k nodes
        ListNode* node = head;
        for (int i = 0; i < k; ++i) {
            if (!node) return head;
            node = node->next;
        }

        // Reverse first k nodes
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

        // Recursively call for the rest
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
