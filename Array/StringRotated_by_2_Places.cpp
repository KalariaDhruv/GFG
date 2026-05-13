/* Given two strings s1 and s2. Return true if the string s2 can be obtained 
by rotating (in any direction) string s1 by exactly 2 places, otherwise, false.

Note: Both rotations should be performed in same direction chosen initially.

Examples:

Input: s1 = "amazon", s2 = "azonam"
Output: true
Explanation: "amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".
 */

//https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks

class Solution {
    
    void rotateclockwise(string &s)
    {
        char c = s[s.size()-1];
        int index = s.size()-2;
        
        while(index >= 0)
        {
            s[index+1] = s[index];
            index--;
        }
        s[0] = c;
    }
    
    void rotateanticlockwise(string &s)
    {
        char c = s[0];
        int index = 1;
        
        while(index < s.size())
        {
            s[index-1] = s[index];
            index++;
        }
        s[s.size()-1] = c;
    }
    
  public:
    bool isRotated(string& s1, string& s2) {
        // code here

    if(s1.size() != s2.size())
    return 0;
    
    string clockwise, anticlockwise;
    
    clockwise = s1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);
    
    if(clockwise == s2)
    return 1;
    
    anticlockwise = s1;
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);
    
    if(anticlockwise == s2)
    return 1;
    
    return 0;
    }
};