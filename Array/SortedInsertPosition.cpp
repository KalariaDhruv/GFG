/* Given a sorted array arr[] (0-index based) of distinct integers and an integer k, find the index of k if it is present in the arr[]. If not, return the index where k should be inserted to maintain the sorted order.

Examples :

Input: arr[] = [1, 3, 5, 6], k = 5
Output: 2
Explanation: Since 5 is found at index 2 as arr[2] = 5, the output is 2. */

//https://www.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int start = 0, end = arr.size()-1, mid, index;
        
        while(start<=end)
        {
            mid = end + (start - end)/2;
            
            if(arr[mid] == k)
            {
                return mid;
            }
            else if(arr[mid]<k)
            {
                start = mid + 1;
                index = mid + 1;//for lase index case 3 example
            }
            else{
                end = mid - 1;
                index = mid; // for current index
            }
        }
        return index;
    }
};