class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
          int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0; // carry over
    }

    // If all digits were 9, we need a new digit at the start
    //digits.push_back(0); 
    digits.insert(digits.begin(), 1);
    return digits;
    }
};