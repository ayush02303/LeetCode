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
    public ListNode modifiedList(int[] nums, ListNode head) {
          HashSet<Integer> set = new HashSet<>();
        ListNode temp = head;

        // Step 1: Store all values from the list
        while (temp != null) {
            set.add(temp.val);
            temp = temp.next;
        }

        // Step 2: Erase values that are in nums
        for (int num : nums) {
            set.remove(num);
        }

        // Step 3: Rebuild the list with only values remaining in the set
        ListNode dummy = new ListNode(-1); // dummy node for easier construction
        ListNode curr = dummy;
        temp = head;

        while (temp != null) {
            if (set.contains(temp.val)) {
                curr.next = new ListNode(temp.val);
                curr = curr.next;
            }
            temp = temp.next;
        }

        return dummy.next; // new head of the modified list
        
    }
}