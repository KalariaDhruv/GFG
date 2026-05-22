/* You are given an array arr[] of positive integers. Your task is to find the smallest non-negative integer x (greater than or equal to zero) that can be inserted between any two elements of the array such that the sum of the elements in the subarray before x is equal to the sum of the elements in the subarray after x, with the newly inserted integer x included in either of the two subarrays.

Your output should be a list of three integers:

The smallest non-negative integer x that can be inserted.
The position (1-indexed) where x is inserted.
A flag indicating whether x was added to the first subarray (1) or the second subarray (2). 
Note: If the returned answer is correct, output is true, else false.

Examples:

Input: arr[] = [3, 2, 1, 5, 7, 8]
Output: [4, 5, 1]
Explanation: The smallest possible integer x = 4 can be inserted between 5 and 7, making the subarrays:
First subarray: [3, 2, 1, 5, 4] with sum = 15.
Second subarray: [7, 8] with sum = 15.
x is inserted at position 5 and included in the first subarray. */


//https://www.geeksforgeeks.org/problems/equal-sums4801/1


class Solution {
  public:
    // Function to find the equal sum partition.
    vector<int> EqualSum(vector<int> arr) {
        
        int n=arr.size();
        //sum of all array
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        
        vector<int>ans(3);
        ans[0] = INT_MAX;
        
        int leftsum = 0, rightsum;
        
        for(int i=0;i<n-1;i++)
        {
            leftsum += arr[i];
            rightsum = sum - leftsum;
            
            if(abs(leftsum-rightsum) > ans[0])
            continue;
            
            if(rightsum > leftsum)
            {
                ans[2] = 2;
                ans[0] = rightsum - leftsum;
                ans[1] = i+2;
            }
            else{
                ans[2] = 1;
                ans[0] = leftsum - rightsum;
                ans[1] = i+2;
            }
        }
        return ans;
    }
};