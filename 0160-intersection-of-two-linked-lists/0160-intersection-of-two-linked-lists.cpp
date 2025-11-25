class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;

        // Store nodes of list A
        ListNode* temp = headA;
        while (temp != NULL) {
            st.insert(temp);
            temp = temp->next;
        }

        // Check nodes of list B
        temp = headB;
        while (temp != NULL) {
            if (st.find(temp) != st.end()) {
                return temp;   // Intersection found
            }
            temp = temp->next;
        }

        return NULL; // No intersection
    }
};
