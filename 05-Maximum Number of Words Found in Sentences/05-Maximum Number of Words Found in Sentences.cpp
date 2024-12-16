// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0; // To store the maximum number of words found in any sentence.

        // Loop through each sentence in the vector
        for (const auto& sentence : sentences) {
            int wordCount = 1; // Initialize word count as 1 because every sentence has at least one word.

            // Loop through each character in the sentence
            for (char ch : sentence) {
                if (ch == ' ') { // If the character is a space, it indicates the end of a word.
                    wordCount++; // Increment the word count.
                }
            }

            // Update the maximum word count if the current sentence has more words.
            maxWords = max(maxWords, wordCount);
        }

        // Return the maximum number of words found in any sentence.
        return maxWords;
    }
};
