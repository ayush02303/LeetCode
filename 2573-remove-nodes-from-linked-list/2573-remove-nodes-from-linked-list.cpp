class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = head;
        int maxVal = curr->val;
        ListNode* prev = dummy;

        while (curr) {
            if (curr->val < maxVal) {
                prev->next = curr->next;  // skip it
            } else {
                maxVal = curr->val;
                prev = curr;
            }
            curr = curr->next;
        }

        return reverse(dummy->next);
    }
};
