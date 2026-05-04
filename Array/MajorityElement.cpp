/* Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Since, 1 is present more than 7/2 times, so it is the majority element. */

//https://www.geeksforgeeks.org/problems/majority-element-1587115620/1

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        //moore voting algorithem
        int candidate, count = 0;
        int n = arr.size();
        
        for(int i = 0;i<n;i++)
        {
            if(count == 0)
            {
                count = 1;
                candidate = arr[i];
            }
            else{
                if(candidate == arr[i])
                count++;
                else 
                count--;
            }
        }
        
        count = 0;
        for(int i = 0;i<n;i++)
        {
            if(arr[i] == candidate)
            count++;
        }
        
        if(count > n/2)
        return candidate;
        else
        return -1;
    }
};