/* A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 

Examples:

Input: arr[] = [5, 6, 1, 2, 3, 4]
Output: 1
Explanation: 1 is the minimum element in the array.
Input: arr[] = [3, 1, 2]
Output: 1
Explanation: Here 1 is the minimum element. */

//https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/0

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int l = 0, r = arr.size()-1;
        
        int mid;
        
        while(l < r)
        {
            mid = l + (r - l)/2;
            
            if(arr[mid]>arr[r])// 1 2 3 4 5 right side need to be big value
            {
                l = mid + 1;
            }
            else
            {
                r = mid;// for break the condition
            }
        }
        return arr[r];
    }
};