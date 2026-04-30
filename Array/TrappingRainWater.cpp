/* Given an array arr[] with non-negative integers representing the height of blocks. 
If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

Examples:

Input: arr[] = [3, 0, 1, 0, 4, 0, 2]
Output: 10
Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

Input: arr[] = [3, 0, 2, 0, 4]
Output: 7
Explanation: Total water trapped = 0 + 3 + 1 + 3 + 0 = 7 units. */

//https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1 

//using two pointer

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
    
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;
    
        while (left <= right) {
            if (arr[left] <= arr[right]) 
            {
                if (arr[left] >= leftMax) 
                {
                    leftMax = arr[left];
                } 
                else 
                {
                    water += leftMax - arr[left];
                }
                left++;
            } else 
            {
                if (arr[right] >= rightMax) 
                {
                    rightMax = arr[right];
                } 
                else 
                {
                    water += rightMax - arr[right];
                }
                right--;
            }
        }
    
        return water;
    }
};




// using leftmost and right most


class Solution {
  public:
  //function code
  
  
    vector<int> getLeftMaxArray(vector<int>& arr, int& n)
    {
        vector<int>leftMax(n);
        
        leftMax[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
            leftMax[i] = max(leftMax[i-1], arr[i]);
        }
        return leftMax;
    }
    
    vector<int> getRightMaxArray(vector<int>& arr, int& n)
    {
        vector<int>rightMax(n);
        
        rightMax[n-1] = arr[n-1]; // right most
        
        for(int i=n-2 ;i>=0; i--)
        {
            rightMax[i] = max(rightMax[i+1], arr[i]);
        }
        return rightMax;
    }
  
  
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> leftMax = getLeftMaxArray(arr, n);
        vector<int> rightMax = getRightMaxArray(arr, n);
        
        int sum =0;
        for(int i=0;i<n;i++)
        {
            int height = min(leftMax[i], rightMax[i]) - arr[i];
            sum +=height;
        }
        
        return sum;
    }
};