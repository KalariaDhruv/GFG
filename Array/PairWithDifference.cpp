/* Given an array, arr[] and an integer x, return true if there exists a pair of elements in the array 
whose absolute difference is x, otherwise, return false.

Examples:

Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78
Output: true
Explanation: Pair (2, 80) have an absolute difference of 78. */

//https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1


// two pointer


class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int start = 0;
        int end = 1;
        
        //if array caontains negetive values
        if(x<0)
        x = x*-1;
        
        if(n<1)
        return false;
        
        while(end<n)
        {
            if(arr[end] - arr[start] == x)
            return true;
            else if(arr[end] - arr[start] < x)
            end++;
            else
            start++;
            
            //if start and reach at same index 
            //it will through runtime error
            if(start==end)
            end++;
        }
        return false;
    }
};
