class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0; // Sum of all elements
        int digitSum = 0;   // Sum of all digits of all elements

        // Iterate through each number in the array using a normal for loop
        for (int i = 0; i < nums.size(); i++) {
            elementSum += nums[i]; // Add the element to the elementSum

            // Calculate the digit sum for the current number
            int temp = nums[i];
            while (temp > 0) {
                digitSum += temp % 10; // Add the last digit to digitSum
                temp /= 10; // Remove the last digit
            }
        }

        // Return the absolute difference between the element sum and the digit sum
        return abs(elementSum - digitSum);
    }
};
