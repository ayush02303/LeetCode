class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for (int num : nums) {
            st.insert(num);
        }
        int j = 0;
        for (int num : st) {
            nums[j++] = num;
        }
        int k = st.size();
        return k;
    }
};