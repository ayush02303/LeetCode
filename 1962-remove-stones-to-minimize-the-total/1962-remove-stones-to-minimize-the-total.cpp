class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum = 0;

        for (int x : piles) {
            sum += x;
            pq.push(x);
        }

        while (k--) {
            int x = pq.top();
            pq.pop();

            int removed = x / 2;
            sum -= removed;

            pq.push(x - removed);  // 🔴 correct value
        }
        return sum;
    }
};
