/* Given an array arr of integers, return the sums of all subsets in the list.  
Return the sums in any order.

Examples:

Input: arr[] = [2, 3]
Output: [0, 2, 3, 5]
Explanation: When no elements are taken then Sum = 0. 
When only 2 is taken then Sum = 2. When only 3 is taken then Sum = 3. 
When elements 2 and 3 are taken then Sum = 2+3 = 5. */

// https://www.geeksforgeeks.org/problems/subset-sums2234/1

class Solution {
  public:
    void findSub(vector<int>&arr, int index, int n, int sum, vector<int>&ans)
    {
        if(index==n){
        ans.push_back(sum);
        return;
        }
        
        findSub(arr, index+1, n, sum+arr[index], ans);
        findSub(arr,index+1, n, sum, ans);
    }
    
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        findSub(arr,0,arr.size(),0,ans);
        return ans;
    }
};