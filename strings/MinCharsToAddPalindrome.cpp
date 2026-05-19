/* Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

Note: A palindrome string is a sequence of characters that reads the same forward and backward.

Examples:

Input: s = "abc"
Output: 2
Explanation: Add 'b' and 'c' at front of the above string to make it palindrome: "cbabc"
 */

//https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1?page=1&difficulty

class Solution {
  public:
    int minChar(string &s) {
        // code here
        
        string rev = s;
        reverse(rev.begin(), rev.end());
        int size = s.size();
        s += '$';
        s += rev;
        
        int n = s.size();
        vector<int>lps(n,0);
        
        int pre = 0, suf = 1;
        
        while(suf < s.size())
        {
            if(s[pre] == s[suf])
            {
                lps[suf] = pre+1;
                pre++,suf++;
            }
            else
            {
                if(pre == 0)
                suf++;
                else
                {
                    pre = lps[pre-1];
                }
            }
        }
        return size - lps[n-1];
    }
};
