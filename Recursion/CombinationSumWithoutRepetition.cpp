/* Given an array arr[] and a target, your task is to find all unique combinations in the array where the sum of the elements is equal to target. Each element in arr[] can be used at most once in the combination.

Note: You can return your answer in any order, the driver code will print them in sorted order.
Test cases are generated such that number of unique combination does not exceed 106.

Examples:

Input: arr[] = [1, 2, 3], target = 5
Output: [[2, 3]]
Explanation: There is only one unique combinations whose sum is equal to the target.
 */

//https://www.geeksforgeeks.org/problems/combination-sum-ii-1664263832/1


class Solution {
  public:
    void combination(vector<int>&arr, vector<vector<int>>&ans, vector<int>&path, int index, int n, int target){
            
            if(target==0){
                ans.push_back(path);
                return;
            }
            
            if(target < 0 || index==n){
                return;
            }
            
            vector<bool>used(51,0);
            
            for(int i=index;i<n;i++)
            {
                if(!used[arr[i]]){
                    used[arr[i]]=1;
                    path.push_back(arr[i]);
                    combination(arr,ans,path,i+1,n,target-arr[i]);
                    path.pop_back();
                }
            }
            
        }
    
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int>path;
        sort(arr.begin(),arr.end());
        combination(arr,ans,path,0,arr.size(),target);
        return ans;
    }
};