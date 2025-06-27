class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st; 
        ListNode* temp = head; 

        // Step 1: Store all values from the list
        while (temp != NULL) {
            st.insert(temp->val); 
            temp = temp->next; 
        }

        // Step 2: Erase values that are in nums
        for (auto num : nums) {
            st.erase(num); 
        }

        // Step 3: Rebuild the list with only values remaining in the set
        ListNode* dummy = new ListNode(-1); // dummy node for easier construction
        ListNode* curr = dummy; 
        temp = head; 

        while (temp != NULL) {
            if (st.count(temp->val)) {
                curr->next = new ListNode(temp->val); 
                curr = curr->next;
            }
            temp = temp->next; 
        }

        return dummy->next; // new head of the modified list
    }
};
