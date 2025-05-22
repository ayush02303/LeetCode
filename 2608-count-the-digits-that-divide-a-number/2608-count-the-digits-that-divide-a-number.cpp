class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int count = 0;

        while (temp != 0) {
            int i = temp % 10;
            if (num % i == 0) {
                count += 1;
            } // completely divides the number

            temp = temp / 10;
        }
        return count;
    }
};