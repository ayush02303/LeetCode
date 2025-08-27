class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> freq;
        freq[0] = 1; // prefix sum = 0 occurs once
        int sum = 0, ans = 0;

        for(int num : nums){
            sum += num;
            // check if there exists a prefix with sum = (sum - goal)
            if(freq.find(sum - goal) != freq.end()){
                ans += freq[sum - goal];
            }
            freq[sum]++;
        }
        return ans;
    }
};
