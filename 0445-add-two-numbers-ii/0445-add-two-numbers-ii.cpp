class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;

        // Push all digits of l1 and l2 onto stacks
        while (l1) {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            s2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        ListNode* result = nullptr;

        // Perform addition
        while (!s1.empty() || !s2.empty() || carry > 0) {
            int a = (!s1.empty()) ? s1.top() : 0;
            int b = (!s2.empty()) ? s2.top() : 0;

            if (!s1.empty()) s1.pop();
            if (!s2.empty()) s2.pop();

            int sum = a + b + carry;
            carry = sum / 10;

            // Insert new node at the front
            ListNode* newNode = new ListNode(sum % 10);
            newNode->next = result;
            result = newNode;
        }

        return result;
    }
};
