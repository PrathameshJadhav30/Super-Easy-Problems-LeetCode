// https://leetcode.com/problems/number-of-employees-who-met-the-target/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0; // Counter for employees meeting the target
        for (int hour : hours) { // Iterate through the hours vector
            if (hour >= target) { // Check if the employee met or exceeded the target
                count++; // Increment the count
            }
        }
        return count; // Return the total count
    }
};
