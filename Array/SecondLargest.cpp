/* Given an array of positive integers arr[], return the second largest element from the array.
If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34. */

//https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int max = arr[0];
        int secmax = -1;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            max = arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] > secmax && arr[i]< max)
            secmax = arr[i];
        }
        return secmax;
    }
};

//second loop also like this 
// for(int i=0;i<n;i++)
// {
//     if(arr[i]==max)
//     continue;
//     else if(arr[i]>secmax)
//     secmax = arr[i];
// }