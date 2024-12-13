// https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=prshgx6i
class Solution {
public:
    int addDigits(int num) {
        string p=to_string(num);
        int a=10;
        while(a>9)
        {
             a =0;
             for(int i =0;i < p.size();i++)
             {
                a+=p[i]-48;
             }
             p=to_string(a);
        }
        return a;
    }
};