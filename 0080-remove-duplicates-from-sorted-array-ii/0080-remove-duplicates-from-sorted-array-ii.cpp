class Solution {
public:
  

        int removeDuplicates(vector<int>& nums) {
    vector<int> temp;
    unordered_map<int, int> count;

    for (int num : nums) {
        if (count[num] < 2) {
            temp.push_back(num);
            count[num]++;
        }
    }

    nums = temp;
    return nums.size();
        
    }
};