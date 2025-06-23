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
    public ListNode[] splitListToParts(ListNode head, int k) {
        int length = 0;
        ListNode temp = head;

        // Step 1: Count the total length of the list
        while (temp != null) {
            length++;
            temp = temp.next;
        }

        int partSize = length / k;
        int extra = length % k;

        ListNode[] result = new ListNode[k];
        temp = head;

        for (int i = 0; i < k && temp != null; i++) {
            result[i] = temp;
            int currentPartSize = partSize + (extra > 0 ? 1 : 0);
            extra--;

            // Move to the end of the current part
            for (int j = 1; j < currentPartSize; j++) {
                temp = temp.next;
            }

            // Disconnect current part from the rest of the list
            ListNode nextPart = temp.next;
            temp.next = null;
            temp = nextPart;
        }

        return result;
    }
}
