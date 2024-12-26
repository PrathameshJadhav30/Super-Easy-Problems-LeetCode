// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/?envType=problem-list-v2&envId=prshgx6ihttps://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1; // Initialize product as 1
        int sum = 0;     // Initialize sum as 0
        
        while (n > 0) {
            int digit = n % 10; // Extract the last digit
            product *= digit;   // Multiply the digit to the product
            sum += digit;       // Add the digit to the sum
            n /= 10;            // Remove the last digit
        }
        
        return product - sum; // Return the difference between product and sum
    }
};
