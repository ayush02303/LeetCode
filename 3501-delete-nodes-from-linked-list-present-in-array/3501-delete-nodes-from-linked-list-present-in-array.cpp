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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st; 
        ListNode* temp = head; 
        while(temp!= NULL){
            st.insert(temp->val);
            temp = temp->next; 
        }
        for( auto num : nums){
            st.erase(num); 
        }
        temp = head; 
        ListNode* dummy = new ListNode(-1); 
        ListNode* curr = dummy; 

        while(temp!= NULL){
            if( st.count(temp->val)){
                curr->next = new ListNode(temp->val); 
                curr = curr->next;
            }

            temp = temp->next; 
        }
        return dummy->next; 
    }
};