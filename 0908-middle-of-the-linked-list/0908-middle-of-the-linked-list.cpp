class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        // Step 1: Count total nodes
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Step 2: Find middle index
        int mid = count / 2;  // If even, returns the second middle as per LeetCode definition

        // Step 3: Traverse again to the middle
        temp = head;
        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }

        return temp;
    }
};
