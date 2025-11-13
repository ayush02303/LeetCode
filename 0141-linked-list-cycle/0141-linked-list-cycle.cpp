/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
          unordered_set<ListNode*> visited; // store addresses of visited nodes
        
        ListNode* current = head;
        while (current != nullptr) {
            // if we have already seen this node → cycle detected
            if (visited.find(current) != visited.end()) {
                return true;
            }
            visited.insert(current);  // mark node as visited
            current = current->next;
        }

        return false;
        
    }
};