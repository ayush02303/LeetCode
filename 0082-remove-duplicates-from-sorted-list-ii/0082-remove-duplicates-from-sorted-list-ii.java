/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
         if (head == null || head.next == null) return head;

        // Dummy node to handle head duplicates
        ListNode dummy = new ListNode(0, head);
        ListNode prev = dummy;
        ListNode curr = head;

        while (curr != null) {
            // Check for duplicates
            boolean isDuplicate = false;
            while (curr.next != null && curr.val == curr.next.val) {
                curr = curr.next;
                isDuplicate = true;
            }

            if (isDuplicate) {
                // Skip all duplicates
                prev.next = curr.next;
            } else {
                // Move prev only if no duplicate was found
                prev = prev.next;
            }

            curr = curr.next;
        }

        return dummy.next;
        
        
    }
}