/* Given a string s, check if it is a "Panagram" or not. Return true if the string is a Panagram, else return false.
A "Panagram" is a sentence containing every letter in the English Alphabet either in lowercase or Uppercase.

Examples:

Input: s = "Bawds jog, flick quartz, vex nymph"
Output: true
Explanation: In the given string, there are all the letters of the English alphabet. Hence, the output is true. 
*/

//http://geeksforgeeks.org/problems/pangram-checking-1587115620/1

class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        
        vector<bool> ans(26,0);
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                int index = s[i] - 'a';
                ans[index] = 1;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                //int index = s[i] - 'A';
                //ans[index] = 1;
                ans[s[i] - 'A'] = 1;
            }
            
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i] == 0)
            return 0;
        }
        return 1;
    }
};
