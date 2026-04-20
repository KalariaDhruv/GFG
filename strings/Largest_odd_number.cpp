/* Given a string S, representing a large integer. Return the largest-valued odd integer (as a string) that is substring of the given string S.

Note: A substring is a contiguous sequence of characters within a string. A null string ("") is also a substring.

Examples:

Input: s = "504"
Output: "5"
Explanation: The only subtring "5" is odd number.

Input: s = "59847453748642"
Output: "598474537"

// need to find orr number like check from last and find digit is odd(1/3/5/7/9) any one of them then return 
 */

//https://www.geeksforgeeks.org/problems/largest-odd-number-in-string/1

class Solution {
  public:
    string maxOdd(string s) {
        // code here
        int n = s.length();
        
        for(int i = n-1; i>=0; i--)
        {
            if((s[i] - '0')%2 != 0)
            {
                return s.substr(0, i+1);
            }
        }
        return "";
    }
};