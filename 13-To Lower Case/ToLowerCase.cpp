// https://leetcode.com/problems/to-lower-case/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    string toLowerCase(string s) {
        // Iterate through each character in the string
        for (int i = 0; i < s.length(); ++i) {
            // Check if the character is an uppercase letter
            if (s[i] >= 'A' && s[i] <= 'Z') {
                // Convert to lowercase by adding the ASCII difference
                s[i] = s[i] + ('a' - 'A');
            }
        }
        // Return the modified string
        return s;
    }
};
