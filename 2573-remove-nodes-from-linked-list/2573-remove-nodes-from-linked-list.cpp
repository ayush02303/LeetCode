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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head; 
        stack<ListNode*>st; 

        while( temp!= NULL){
            st.push(temp); 
            temp = temp->next;
        }
        temp = st.top(); 
        st.pop(); 
        int maximum = temp->val; 
        ListNode* resultHead = new ListNode(temp->val); 

        while(!st.empty()){
            temp = st.top(); 
            st.pop(); 

            if( temp->val < maximum ) continue; 
            else{
                ListNode* newnode = new ListNode( temp->val);
                newnode->next = resultHead; 
                resultHead = newnode;  
                maximum = temp->val;

            }

        }
        return resultHead;
    }
};