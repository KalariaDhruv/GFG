/* For an integer n, find the number of trailing zeroes in n!.

Examples :

Input: n = 5
Output: 1
Explanation: 5! = 120 so the number of trailing zero is 1. */


//https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks



// User function Template for C++
class Solution {
  public:
    int trailingZeroes(int n) {
        // Write Your Code here
        
        int count = 0;
        
        while(n>=5)
        {
            count += n/5;
            n/=5;
        }
        
        return count;
        
    }
};