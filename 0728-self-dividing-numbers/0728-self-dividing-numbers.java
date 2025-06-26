class Solution {
    public boolean isValid(int n) {
        int temp = n;
        while (temp != 0) {
            int rem = temp % 10;
            if (rem == 0 || n % rem != 0) return false; // ✅ Fixed condition
            temp = temp / 10;
        }
        return true;
    }

    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> ans = new ArrayList<>();
        for (int i = left; i <= right; i++) {
            if (isValid(i)) {
                ans.add(i);
            }
        }
        return ans;
    }
}
