// https://leetcode.com/problems/find-words-containing-character/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    // Function to find the indices of words containing the character 'x'
    vector<int> findWordsContaining(vector<string>& words, char x) {
        // Vector to store the indices of words that contain the character 'x'
        vector<int> idx;
        
        // Loop through each word in the 'words' vector
        for(int i = 0; i < words.size(); i++) {
            
            // Loop through each character in the current word
            for(char ch : words[i]) {
                
                // Check if the current character matches the character 'x'
                if(ch == x) {
                    
                    // If 'x' is found, add the index of the word to the result vector
                    idx.push_back(i);
                    
                    // Stop further checking of the current word once 'x' is found
                    break;
                }
            }
        }
        
        // Return the vector of indices where 'x' was found
        return idx;
    }
};
