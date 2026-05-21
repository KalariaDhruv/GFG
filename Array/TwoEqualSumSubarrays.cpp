/* Given an array of integers arr[], return true if it is possible to split it in two subarrays 
(without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible 
then return false.

Examples:

Input: arr[] = [1, 2, 3, 4, 5, 5]
Output: true
Explanation: We can divide the array into [1, 2, 3, 4] and [5, 5]. The sum of both the subarrays are 10.
 */

//https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1


class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        int totalsum = 0;
        
        for(int i=0;i<n;i++)
        {
            totalsum += arr[i];
        }
        
        //if return any carry it will not able to splite arr in to parts
        if(totalsum % 2)
        return false;
        
        int target = totalsum/2;
        
        int prefsum = 0;
        
        // n-1 is for case like [1,2,3,4,-10] 10 and -10 sum=0
        for(int i=0;i<n-1;i++)
        {
            prefsum += arr[i];
            if(prefsum == target)
            return true;
        }
        
        return false;
    }
};
