/* Given an array arr[] of integers and another integer target. You have to find all unique quadruples from the given array whose sum is equal to the given target.

Note: All the quadruples should be internally sorted, i.e for any quadruple [q1, q2, q3, q4] it should be : q1 ≤ q2 ≤ q3 ≤ q4.

Examples :

Input: arr[] = [0, 0, 2, 1, 1], target = 3
Output: [[0, 0, 1, 2]]
Explanation: Sum of 0, 0, 1, 2 is equal to 3.

// we need out put of array with all posiable combination of target value like below

Input: arr[] = [10, 2, 3, 4, 5, 7, 8], target = 23
Output: [[2, 3, 8, 10], [2, 4, 7, 10], [3, 5, 7, 8]] 
Explanation: Sum of [2, 3, 8, 10] is 23, sum of [2, 4, 7, 10] is 23 and sum of [3, 5, 7, 8] is also 23.
 */


//https://www.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1



class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        vector<vector<int>>ans;
        
        if(n<4)
        return ans;
        
        for(int i=0; i<n-3;i++)
        {
            //skip same value don't repeat
            if(i>0 && arr[i] == arr[i-1]) continue;
            
            for(int j=i+1;j<n-2;j++)
            {
                //skip if value is same 
                if(j>i+1 && arr[j] == arr[j-1]) continue;
                
                int start = j+1;
                int end = n-1;
                
                while(start<end)
                {
                    long long sum = arr[i]+arr[j]+arr[start]+arr[end];
                    
                    if(sum == target)
                    {
                        ans.push_back({arr[i],arr[j],
                                      arr[start],arr[end]});
                        start++;
                        end--;
                        
                        // skip duplicates for start
                        while (start < end && 
                                arr[start] == arr[start - 1]) start++;

                        // skip duplicates for end
                        while (start < end && 
                                arr[end] == arr[end + 1]) end--;
                    }
                    else if(sum > target)
                    end--;
                    else
                    start++;
                }
            }
        }
        return ans;
    }
};