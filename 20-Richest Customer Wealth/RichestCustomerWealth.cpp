// https://leetcode.com/problems/richest-customer-wealth/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; // Initialize the maximum wealth to 0
        
        // Iterate over each customer in the accounts grid
        for (const auto& customer : accounts) {
            int currentWealth = 0; // Initialize current customer's wealth
            
            // Calculate the sum of money in all their bank accounts
            for (int money : customer) {
                currentWealth += money;
            }
            
            // Update maxWealth if the current customer's wealth is greater
            maxWealth = max(maxWealth, currentWealth);
        }
        
        return maxWealth; // Return the wealth of the richest customer
    }
};