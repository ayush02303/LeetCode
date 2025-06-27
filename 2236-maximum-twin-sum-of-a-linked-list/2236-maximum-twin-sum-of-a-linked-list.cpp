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
    int pairSum(ListNode* head) {
        stack<int>st; 
        ListNode* temp = head; 
        while(temp!= NULL){
            st.push(temp->val);
            temp = temp->next; 
        }
        int N = st.size(); 
        int count = 1; 
        temp = head; 
        int result = 0;
        while( count <= N/2)
        {
            result = max(temp->val+st.top(),result); 
            st.pop();
            count+=1; 
            temp = temp->next;
        }
        return result; 
    }
};