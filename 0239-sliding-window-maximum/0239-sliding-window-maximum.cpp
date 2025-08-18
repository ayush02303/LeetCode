class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores indices
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            // 1. Remove indices out of the current window
            if(!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }
            
            // 2. Remove smaller elements (they can’t be max if a bigger comes later)
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            
            // 3. Add current index
            dq.push_back(i);
            
            // 4. Record the max (only when we have a full window)
            if(i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;
    }
};
