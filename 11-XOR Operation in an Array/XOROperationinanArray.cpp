// https://leetcode.com/problems/xor-operation-in-an-array/submissions/1482803209/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    // Function to calculate the XOR of elements in a virtual array
    int xorOperation(int n, int start) {
        int result = 0; // Initialize the XOR result to 0

        // Loop through the array elements 
        for (int i = 0; i < n; i++) {
            int element = start + 2 * i; // Calculate the i-th element in the array
            result ^= element;          // XOR the element with the current result
        }

        return result; // Return the final XOR result
    }
};