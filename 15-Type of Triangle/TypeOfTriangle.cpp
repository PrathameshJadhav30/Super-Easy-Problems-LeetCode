class Solution {
public:
    // Function to determine the type of triangle
    string triangleType(vector<int>& nums) {
        // Ensure the input has exactly 3 sides
        if (nums.size() != 3) {
            return "none"; // Invalid input, cannot form a triangle
        }

        // Sort the sides to simplify checking the triangle inequality
        sort(nums.begin(), nums.end());

        // Check the triangle inequality theorem
        // The sum of the two smaller sides must be greater than the largest side
        if (nums[0] + nums[1] <= nums[2]) {
            return "none"; // Cannot form a triangle
        }

        // Check if all sides are equal
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral"; // All sides are of equal length
        }

        // Check if exactly two sides are equal
        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) {
            return "isosceles"; // Two sides are of equal length
        }

        // If none of the above conditions are met, it is a scalene triangle
        return "scalene"; // All sides are of different lengths
    }
};
