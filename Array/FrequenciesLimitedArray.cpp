/* You are given an array arr[] containing positive integers.
 The elements in the array arr[] range from  1 to n (where n is the size of the array), 
 and some numbers may be repeated or absent. 
 Your have to count the frequency of all numbers in the range 1 to n and
  return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).

Examples:

Input: arr[] = [2, 3, 2, 3, 5]
Output: [0, 2, 2, 0, 1]
Explanation: We have: 1 occurring 0 times, 2 occurring 2 times,
 3 occurring 2 times, 4 occurring 0 times, and 5 occurring 1 time. 
 */

//https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks


class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        for(int i = 0;i<n;i++)
        arr[i]--;
        
        for(int i = 0;i<n;i++)
        {
            arr[arr[i]%n] += n;
        }
        
        vector<int>ans(n,0);
        //vector<int>ans;
        
        for(int i = 0;i<n;i++)
        {
            ans[i] = arr[i]/n;
            //ans.push_back(arr[i] / n);
        }
        return ans;
    }
};
