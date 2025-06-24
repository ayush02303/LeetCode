class Solution {
    
   

    // Recursive function to reverse the list
    private ListNode reverseList(ListNode head) {
        if (head == null || head.next == null) return head;

        ListNode last = reverseList(head.next);
        head.next.next = head;
        head.next = null;

        return last;
    }

    public ListNode doubleIt(ListNode head) {
        head = reverseList(head);

        ListNode temp = head;
        ListNode prev = null;
        int carry = 0;

        while (temp != null) {
            int value = temp.val * 2 + carry;
            temp.val = value % 10;
            carry = value / 10;

            prev = temp;
            temp = temp.next;
        }

        if (carry != 0) {
            prev.next = new ListNode(carry);
        }

        return reverseList(head);
    }
}
