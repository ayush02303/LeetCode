class Solution {
    public ListNode sortList(ListNode head) {
        List<Integer> ans = new ArrayList<>();
        
        ListNode curr = head;
        while (curr != null) {
            ans.add(curr.val);
            curr = curr.next;
        }
        
        Collections.sort(ans);
        
        curr = head;
        int i = 0;
        while (curr != null) {
            curr.val = ans.get(i++);
            curr = curr.next;
        }
        
        return head;
    }
}
