/* You are given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered to be a peak if it is greater than its adjacent elements (if they exist).

If there are multiple peak elements, Return index of any one of them. The output will be "true" if the index returned by your function is correct; otherwise, it will be "false".

Note: Consider the element before the first element and the element after the last element to be negative infinity.

Examples :

Input: arr = [1, 2, 4, 5, 7, 8, 3]
Output: true
Explanation: arr[5] = 8 is a peak element because arr[4] < arr[5] > arr[6]. */

//https://www.geeksforgeeks.org/problems/peak-element/1?sortBy=submissions&category%5B%5D=Arrays&page=1&difficulty%5B%5D=0


class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int start = 0, mid, n=arr.size(), end=n-1;
        
        while(start<=end)
        {
            mid=start + (end - start)/2;
            if((mid == 0 || arr[mid]>arr[mid-1]) && 
            (mid == n-1 || arr[mid]>arr[mid+1]))
            return mid;
            else if(mid<n-1 && arr[mid]<arr[mid+1])
            start=mid+1;
            else
            end=mid-1;
        }
        return 0;
    }
};