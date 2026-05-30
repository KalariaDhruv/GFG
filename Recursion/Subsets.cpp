/* Given an array arr[] of distinct positive integers, your task is to find all its subsets.

Note: You can return the subsets in any order, the driver code will print them in sorted order.

Examples:

Input: arr[] = [1, 2, 3]
Output: [[], [1], [1, 2], [1, 2, 3], [1, 3], [2], [2, 3], [3]]
Explanation: 
The subsets of [1, 2, 3] in lexicographical order are:
[], [1], [1, 2], [1, 2, 3], [1, 3], [2], [2, 3], [3] */

//https://www.geeksforgeeks.org/problems/subsets-1613027340/1


class Solution {
  public:
    void function(vector<int>&arr,int index,int n, vector<vector<int>>&ans,vector<int>&temp){
        if(index == n){
        ans.push_back(temp);
        return;
    }
    
    //add value 
    temp.push_back(arr[index]);
    function(arr,index+1,n,ans,temp);
    
    //didn't add value
    temp.pop_back();
    function(arr,index+1,n,ans,temp);
    }
    
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        
        vector<vector<int>>ans;
        vector<int>temp;
        function(arr,0,arr.size(),ans,temp);
        return ans;
        
    }
};