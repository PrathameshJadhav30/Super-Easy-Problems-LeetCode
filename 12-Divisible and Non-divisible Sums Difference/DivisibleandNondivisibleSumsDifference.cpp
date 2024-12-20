// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0; // Sum of numbers not divisible by `m`
        int num2 = 0; // Sum of numbers divisible by `m`

        // Iterate through numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            if (i % m == 0) {
                num2 += i; // Add to num2 if divisible by `m`
            } else {
                num1 += i; // Add to num1 if not divisible by `m`
            }
        }

        // Return the result as num1 - num2
        return num1 - num2;
    }
};
