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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr);

        // Step 1: Count total nodes
        int totalLength = 0;
        ListNode* temp = head;
        while (temp) {
            totalLength++;
            temp = temp->next;
        }

        // Step 2: Determine base size and extra nodes
        int partSize = totalLength / k;
        int extra = totalLength % k;

        temp = head;
        for (int i = 0; i < k; ++i) {
            ListNode* partHead = temp;
            ListNode* prev = nullptr;

            int currentSize = partSize + (i < extra ? 1 : 0);  // add extra nodes to first 'extra' parts

            for (int j = 0; j < currentSize; ++j) {
                prev = temp;
                if (temp) temp = temp->next;
            }

            if (prev) prev->next = nullptr;  // cut the part
            result[i] = partHead;
        }

        return result;
    }
};
