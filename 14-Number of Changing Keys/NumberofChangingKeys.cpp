// https://leetcode.com/problems/number-of-changing-keys/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int countKeyChanges(string s) {
        /*
        Function to count the number of times a key is changed while typing a string.

        Args:
        s (string): The input string typed by the user.

        Returns:
        int: The number of key changes.
        */

        // Initialize variables
        char lastKey = '\0'; // To store the last used key 
        int changes = 0;      // To count the number of key changes

        for (char ch : s) {
            // Convert the current character to lowercase to ensure case insensitivity
            char currentKey = tolower(ch);

            // If the current key is different from the last key, it is a key change
            if (currentKey != lastKey) {
                changes++;
                lastKey = currentKey; // Update the last used key
            }
        }

        // Subtract 1 from changes as the first character does not count as a key change
        return max(0, changes - 1);
    }
};
