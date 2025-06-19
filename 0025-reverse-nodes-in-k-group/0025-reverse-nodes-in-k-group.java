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
    public ListNode reverseKGroup(ListNode head, int k) {
        
         ListNode node = head;
        for (int i = 0; i < k; ++i) {
            if (node == null) return head;
            node = node.next;
        }

     
        ListNode  prev = null;
        ListNode  curr = head;
        ListNode  next = null;
        int count = 0;
        while (count < k) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        head.next = reverseKGroup(curr, k);
        return prev;
    }
}