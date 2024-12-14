// https://leetcode.com/problems/minimum-number-game/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // Sort the array to simulate removing the smallest elements
    sort(nums.begin(), nums.end());
    vector<int> arr;

    while (!nums.empty()) {
        // Alice removes the smallest element
        int alice_removed = nums[0];
        nums.erase(nums.begin());

        // Bob removes the next smallest element
        int bob_removed = nums[0];
        nums.erase(nums.begin());

        // Bob appends first, then Alice
        arr.push_back(bob_removed);
        arr.push_back(alice_removed);
    }

    return arr;
    }
};