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
    public int pairSum(ListNode head) {
        // Store node values in a list
        List<Integer> ans = new ArrayList<>();
        ListNode temp = head;
        while (temp != null) {
            ans.add(temp.val);
            temp = temp.next;
        }

        int result = 0; // Must initialize to 0 in Java
        int low = 0;
        int high = ans.size() - 1;

        // Compute max twin sum
        while (low < high) {
            int sum = ans.get(low) + ans.get(high);
            result = Math.max(result, sum);
            low++;
            high--;
        }

        return result;
    }
}
