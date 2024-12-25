// https://leetcode.com/problems/find-the-maximum-achievable-number/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        // Each operation increases or decreases `num` by 1 and affects the number similarly.
        // So, the maximum achievable number after `t` operations is `num + 2 * t`.
        return num + 2 * t;
    }
};
