// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/?envType=problem-list-v2&envId=prshgx6i
// A string is palindromic if it reads the same forward and backward.
class Solution {
public:
    // Function to check if a given string is a palindrome
    bool isPalindrome(const string& str) {
        int left = 0;                   // Pointer starting from the beginning of the string
        int right = str.size() - 1;     // Pointer starting from the end of the string

        // Check characters from both ends moving towards the center
        while (left < right) {
            if (str[left] != str[right]) {
                return false;  // If characters don't match, it's not a palindrome
            }
            left++;   // Move the left pointer to the right
            right--;  // Move the right pointer to the left
        }
        return true;  // If all characters match, it's a palindrome
    }

    // Function to find the first palindromic string in the array
    string firstPalindrome(vector<string>& words) {
        for (const string& word : words) {
            // Check if the current word is a palindrome
            if (isPalindrome(word)) {
                return word;  // Return the first palindrome found
            }
        }
        return "";  // If no palindrome is found, return an empty string
    }
};
