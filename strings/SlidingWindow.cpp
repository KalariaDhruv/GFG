//*******************************  Longest substring with distinct characters  ******************

/* You are given a string s. You have to find the length of the longest substring with all distinct characters. 

Examples:

Input: s = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest substring with all distinct characters.
 */

//https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        
        vector<bool>count(256,0);
        
        int first = 0, second = 0, len = 0;
        
        while(second < s.size())
        {
            while(count[s[second]])
            {
                count[s[first]] = 0;
                first++;
            }
            
            count[s[second]] = 1;
            len = max(len, second - first + 1);
            second++;
        }
        return len;
    }
};
