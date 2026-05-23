/* Find the n-th Fibonacci number for a given non-negative integer n.
The Fibonacci sequence is defined as:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) for n ≥ 2
Examples :

Input: n = 5
Output: 5
Explanation: The 5th Fibonacci number is 5. */

//https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1


class Solution {
  public:  
    int fibonacci(int n)
    {
        if(n<=1)
        return n;
        
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
  public:
    int nthFibonacci(int n) {
        // code here
        
        int result = fibonacci(n);
        return result;
    }
};

