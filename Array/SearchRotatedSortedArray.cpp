/* Given an array arr[] of distinct elements, which was initially sorted in ascending order but 
then rotated at some unknown pivot, the task is to find the index of a target key.  If the key is not present in the 
array, return -1.

Examples :

Input: arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
Output: 8
Explanation: 3 is found at index 8. */

// https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int start = 0, mid, end = arr.size() - 1, index = -1;
        
        while(start <= end)
        {
            mid = end + (start - end)/2;
            
            if(arr[mid] == key)
            {
                return mid;
            }
            else if(arr[mid] > arr[start])
            {
                if(arr[mid] < key || key < arr[start])
                start = mid + 1;
                else
                end = mid - 1;
            }
            else
            {
                if(arr[start]<=key || key < arr[mid])
                end = mid - 1;
                else
                start = mid + 1;
            }
        }
        return index;
    }
};