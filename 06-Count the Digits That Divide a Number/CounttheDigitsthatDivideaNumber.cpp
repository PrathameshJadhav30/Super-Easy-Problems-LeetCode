// https://leetcode.com/problems/count-the-digits-that-divide-a-number/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int countDigits(int num) {
        // Initialize count to zero, which will store the number of digits that divide the number
        int count = 0;

        // Handle edge case when num is 0, as zero cannot divide any number
        if (num == 0) {
            return 0;  // No digit in '0' can divide the number, so return 0
        }

        int temp = num;  // Store the original number to check divisibility later

        // Loop through each digit of the number
        while (temp != 0) {
            int digit = temp % 10;  // Extract the last digit of temp
            temp = temp / 10;  // Remove the last digit of temp

            // Check if the digit is non-zero and divides the original number
            if (digit != 0 && num % digit == 0) {
                count++;  // If it divides the number, increment count
            }
        }

        // Return the count of digits that divide the original number
        return count;
    }
};
