/* Given two non-empty strings s1 and s2, consisting only of lowercase English letters, determine whether they are anagrams of each other or not.
Two strings are considered anagrams if they contain the same characters with exactly the same frequencies, regardless of their order.

Examples:

Input: s1 = "geeks" s2 = "kseeg"
Output: true 
Explanation: Both the string have same characters with same frequency. So, they are anagrams. */

// https://www.geeksforgeeks.org/problems/anagram-1587115620/1

class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        vector<int> count(26,0);
        
        for(char ch : s1)
        {
            count[ch - 'a']++;
        }
        for(char ch1 : s2)
        {
            count[ch1 - 'a']--;
        }
        
        //check all element in array 0
        bool allZeros = all_of(begin(count),end(count), [](int element){
            return element == 0;
        });
        
        return allZeros;
    }
};