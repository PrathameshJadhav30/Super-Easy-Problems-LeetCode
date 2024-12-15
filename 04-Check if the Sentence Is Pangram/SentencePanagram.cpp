//https://leetcode.com/problems/check-if-the-sentence-is-pangram/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    bool checkIfPangram(string sentence) {
        // Panagram means all a-z alphabets appear at least once in the sentence
        int arr[26] = {0}; // Frequency array to check presence of each letter
        int n = sentence.size();
        
        // Mark the presence of each character in the array
        for (int i = 0; i < n; i++) {
            if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                arr[sentence[i] - 'a']++; // Mark character as present
            }
        }

        // Check if all letters a-z are present
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) { // If any letter is missing
                return false;
            }
        }
        return true; // All letters are present
    }
};

// A pangram is a sentence that contains every letter of the alphabet at least once. To check if a sentence is a pangram, you can follow these steps:






