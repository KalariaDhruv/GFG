/* Given an increasing sorted rotated array arr[] of distinct integers. The array is right-rotated k times. Find the value of k.
Let's suppose we have an array arr[] = [2, 4, 6, 9], if we rotate it by 2 times it will look like this:
After 1st Rotation : [9, 2, 4, 6]
After 2nd Rotation : [6, 9, 2, 4]

Examples:

Input: arr[] = [5, 1, 2, 3, 4]
Output: 1
Explanation: The given array is [5, 1, 2, 3, 4]. The original sorted array is [1, 2, 3, 4, 5]. We can see that the array was rotated 1 times to the right.
 */

 //https://www.geeksforgeeks.org/problems/rotation4723/1

 class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int start=0,mid,end=arr.size()-1,index=0,n=arr.size();
        int pivot=arr[0]; 

        while(start<=end)
        {
            mid=end+(start-end)/2;
            if(arr[mid]>pivot)
            {
                index=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return (index+1)%n;
    }
};
