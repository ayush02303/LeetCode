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
      public ListNode reverse(ListNode head) {
        ListNode prev = null;
        while (head != null) {
            ListNode next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    public ListNode removeNodes(ListNode head) {
         head = reverse(head);
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode curr = head;
        int maxVal = curr.val;
        ListNode prev = dummy;

        while (curr!= null ) {
            if (curr.val < maxVal) {
                prev.next = curr.next;  // skip it
            } else {
                maxVal = curr.val;
                prev = curr;
            }
            curr = curr.next;
        }

        return reverse(dummy.next);
        
    }
}