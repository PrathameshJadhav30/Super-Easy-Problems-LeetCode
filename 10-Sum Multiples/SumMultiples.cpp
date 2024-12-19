// https://leetcode.com/problems/sum-multiples/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0; // Initialize sum to store the total

        // Loop through all numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            // Add to sum if i is divisible by 3, 5, or 7
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }

        return sum; // Return the final sum
    }
};
