class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prevA = list1;
        ListNode* afterB = list1;

        // Move prevA to node before index a
        for (int i = 0; i < a - 1; i++) {
            prevA = prevA->next;
        }

        // Move afterB directly to index b+1
        for (int i = 0; i < b + 1; i++) {
            afterB = afterB->next;
        }

        // Connect prevA -> list2
        prevA->next = list2;

        // Move to end of list2
        ListNode* tail = list2;
        while (tail->next != nullptr) {
            tail = tail->next;
        }

        // Connect list2's tail -> afterB
        tail->next = afterB;

        return list1;
    }
};
