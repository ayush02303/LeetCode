class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k ) {
         int count = 0;
        ListNode* temp = head;

        // First pass: Count total number of nodes
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Edge case: removing the head node
        if (k == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Find (count - k - 1)-th node: node before the one to remove
        int target = count - k;
        temp = head;
        for (int i = 1; i < target; ++i) {
            temp = temp->next;
        }

        // Remove the k-th node from end
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
        
    }
};