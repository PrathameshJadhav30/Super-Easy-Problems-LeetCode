// https://leetcode.com/problems/squares-of-a-sorted-array/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    // Function to return the sorted squares of the input array
    vector<int> sortedSquares(vector<int>& nums) {
        // Initialize a vector to store the result
        vector<int> result(nums.size());
        
        // Use two pointers: one at the start and one at the end of the array
        int left = 0;
        int right = nums.size() - 1;
        int index = nums.size() - 1; // Start filling the result array from the end

        // Traverse the array until the pointers meet
        while (left <= right) {
            // Compute the squares of the numbers at both pointers
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            // Compare squares and place the larger one at the current index in the result array
            if (leftSquare > rightSquare) {
                result[index] = leftSquare;
                left++; // Move the left pointer forward
            } else {
                result[index] = rightSquare;
                right--; // Move the right pointer backward
            }

            // Move to the next position in the result array
            index--;
        }

        // Return the sorted squares array
        return result;
    }
};
