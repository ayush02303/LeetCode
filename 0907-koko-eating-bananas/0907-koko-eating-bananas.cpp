#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int total = 0;
            for (int pile : piles) {
                total += (pile + mid - 1) / mid;
            }
            if (total <= h) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};