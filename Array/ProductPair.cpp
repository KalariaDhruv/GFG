/* Given an integer array arr[] and an integer target, determine whether 
there exists a pair of elements in the array whose product is equal to target.

Return true if such a pair exists; otherwise, return false.

Examples:

Input: arr[] = [10, 20, 9, 40], target = 400
Output: true
Explanation: As 10 * 40 = 400, the answer is true.
 */

 
//https://www.geeksforgeeks.org/problems/equal-to-product3836/1


class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        
        
        sort(arr.begin(),arr.end());
        
        //find last index of negetive number
        long long mid = -1, n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            mid = i;
            else
            break;
        }
        
        // if target is positive
        if(target >= 0)
        {
            //check for positive half
            int start = mid+1, end = n-1;
            
            while(start < end)
            {
                long long pro = 1LL * arr[start] * arr[end];
                
                if(pro == target)
                return 1;
                else if(pro < target)
                start++;
                else
                end--;
            }

            //check for negitive half
            start = 0, end = mid;
                
                while(start < end)
                {
                    long long pro = 1LL * arr[start] * arr[end];
                    
                    if(pro == target)
                    return 1;
                    else if(pro < target)
                    end--;
                    else
                    start++;
                }
        }
        //check for target is negative (target < 0)
        else{
            
            int start = 0, end = mid+1;
            
            while(start <= mid && end < n)
            {
                long long pro = 1LL * arr[start] * arr[end];
                
                if(pro == target)
                return 1;
                else if(pro < target)
                start++;
                else
                end++;
            }
        }
        return 0;
    }
};