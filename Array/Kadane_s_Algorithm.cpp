/* Kadane's Algorithm

You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11. */

//https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int result = arr[0];
        
        int maxsub = arr[0];
        
        // i=1 starting from one because arr[0] we already take
        for(int i=1;i<arr.size();i++)
        {
            maxsub = max(arr[i], maxsub + arr[i]);
            
            result = max(result, maxsub);
        }
        
        return result;
    }
};

