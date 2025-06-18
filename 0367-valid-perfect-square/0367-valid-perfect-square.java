class Solution {
    public boolean isPerfectSquare(int num) {
      
        int root = (int)Math.sqrt(num);
        return root * root == num;
        
    }
}