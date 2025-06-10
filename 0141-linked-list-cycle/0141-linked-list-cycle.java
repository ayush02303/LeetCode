/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
         ListNode temp = head;
        HashMap<ListNode, Integer> map = new HashMap<>();

        while (temp != null) {
            if (map.containsKey(temp)) {
                return true; // Cycle detected
            }

            map.put(temp, 1); // Mark as visited
            temp = temp.next;
        }

        return false; // No cycle found
        
    }
}