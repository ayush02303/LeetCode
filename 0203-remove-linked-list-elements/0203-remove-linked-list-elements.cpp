class Solution {
public:
    ListNode* removeElements(ListNode* head, int target) {
        // First, skip all leading nodes with target value
        while (head != NULL && head->val == target) {
            head = head->next;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            if (temp->val == target) {
                // Remove current node
                prev->next = temp->next;
                temp = temp->next;
                // Do not advance prev here because we just removed temp
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
