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
        // stack<int>st; 
        Stack<Integer>st = new Stack<>(); 
        ListNode  temp = head; 
        while(temp!= null ){
            st.push(temp.val);
            temp = temp.next; 
        }
        int N = st.size(); 
        int count = 1; 
        temp = head; 
        int result = 0;
        while( count <= N/2)
        {
            result = Math.max(temp.val+st.peek(),result); 
            st.pop();
            count+=1; 
            temp = temp.next;
        }
        return result; 
    }
}