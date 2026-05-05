/* Given a sorted array of distinct positive integers arr[], 
You need to find the kth positive number that is missing from the arr[].

Examples:

Input: arr[] = [2, 3, 4, 7, 11], k = 5
Output: 9
Explanation: Missing are 1, 5, 6, 8, 9, 10… and 5th missing number is 9. */

//https://www.geeksforgeeks.org/problems/kth-missing-positive-number-in-a-sorted-array/1

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        int mid;
        // value is already in order like [1,2,3]
        int ans = arr.size();
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(arr[mid]-mid-1 >= k)
            {
                ans = mid;
                end = mid -1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans+k;
    }
};