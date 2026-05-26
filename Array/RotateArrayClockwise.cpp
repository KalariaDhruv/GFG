/* You are given an array arr[] of integers and an integer k. 
Your task is to rotate the array k times in the clockwise direction.
In a single clockwise rotation, the last element of the array moves to the front, 
and all other elements shift one position to the right.

Examples:

Input: arr[] = [1, 2, 3, 4, 5, 6], k = 2
Output: [5, 6, 1, 2, 3, 4]
Explanation: Rotating the array 2 times in clockwise gives the array [5, 6, 1, 2, 3, 4].
 */


//https://www.geeksforgeeks.org/problems/rotate-array-clockwise/1


class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        
        //k is bigger then array length
        k = k%n;
        
        // k value not 0
        if(!k)
        return;
        
        //to reverse all array
        int i=0,j=n-1;
        while(i<j)
        {
            int tem = arr[i];
            arr[i] = arr[j];
            arr[j] = tem;
            i++;
            j--;
        }
        
        //reverse index upto k value
        i=0, j=k-1;
        while(i<j)
        {
            int tem = arr[i];
            arr[i] = arr[j];
            arr[j] = tem;
            i++;
            j--;
        }
        
        //reverse k value to last index
        i=k,j=n-1;
        while(i<j)
        {
            int tem = arr[i];
            arr[i] = arr[j];
            arr[j] = tem;
            i++;
            j--;
        }
        
    }
};
