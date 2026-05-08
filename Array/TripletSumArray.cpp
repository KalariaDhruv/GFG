/* Given an array arr[] and an integer target, determine if there exists a triplet in the array 
whose sum equals the given target.

Return true if such a triplet exists, otherwise, return false.

Examples: 

Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
Output: true 
Explanation: The triplet {1, 4, 8} sums up to 13. */

//http://geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

// three sum 
//two pointer

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code for sorting with bubble sort
        int n = arr.size();
        
        for(int i = n-2 ; i>=0; i--)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
            }
        }
        
        //sort(arr.begin(),arr.end());
        
        //code for three sum
        int ans;
        for(int i=0;i<n-2;i++)
        {
            ans = target - arr[i];
            int start = i+1, end = n-1;
            
            while(start<end)
            {
                if(arr[start] + arr[end] == ans)
                return true;
                else if(arr[start] + arr[end] > ans)
                end--;
                else
                start++;
            }
        }
        return false;
    }
};

//***************************** same code with most optimized code ***********************
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n - 2; i++) {

            int start = i + 1;
            int end = n - 1;

            while(start < end) {

                int sum = arr[i] + arr[start] + arr[end];

                if(sum == target)
                    return true;

                else if(sum > target)
                    end--;

                else
                    start++;
            }
        }
        
        
