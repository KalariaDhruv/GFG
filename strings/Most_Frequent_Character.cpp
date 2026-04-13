/* Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

Examples:

Input: s = "testsample"
Output: 'e'
Explanation: 'e' is the character which is having the highest frequency. */

//https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?sortBy=submissions&category%5B%5D=Strings&page=1&difficulty%5B%5D=-1

class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n = s.size();
        int most=0;
        char ans='a';
        int count[26];
        
        for(int i=0;i<26;i++)
        {
            count[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            int index=s[i] - 'a';
            count[index]++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(count[i]>most)
            {
                most=count[i];
                ans= i+'a';
            }
        }
        
        return ans;
    
    }
};
