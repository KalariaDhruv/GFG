/* Given two strings denoting non-negative numbers s1 and s2. Calculate the sum of s1 and s2.

Examples:

Input: s1 = "25", s2 = "23"
Output: "48"
Explanation: The sum of 25 and 23 is 48 */

// https://www.geeksforgeeks.org/problems/sum-of-numbers-or-number1219/1

// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        int Xend = s1.size()-1;
        int Yend = s2.size()-1;
        
        string ans = "";
        
        int num,rem,carry=0;
        char c;
        
        while(Xend >= 0 && Yend >=0)
        {
            num = s1[Xend] - '0' + s2[Yend] - '0' + carry;
            rem = num % 10;
            carry = num / 10;
            c = rem + '0';
            ans = ans + c;
            Xend-- , Yend--;
        }
        while(Xend >= 0)
        {
            num = s1[Xend] - '0' + carry;
            rem = num % 10;
            carry = num / 10;
            c = rem + '0';
            ans = ans + c;
            Xend--;
        }
        while(Yend >= 0)
        {
            num = s2[Yend] - '0' + carry;
            rem = num % 10;
            carry = num / 10;
            c = rem + '0';
            ans = ans + c;
            Yend--;
        }
        
        if(carry)
        ans = ans + "1";
        
        int i = ans.size()-1;
        while(i>0 && ans[i] == '0')
        {
            ans.pop_back();
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};