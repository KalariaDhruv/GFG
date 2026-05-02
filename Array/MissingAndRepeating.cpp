/* Given an unsorted array arr[] of size n, containing elements from the range 1 to n, 
it is known that one number in this range is missing, and another number occurs twice in the array, 
find both the duplicate number and the missing number.

Examples:

Input: arr[] = [2, 2]
Output: [2, 1]
Explanation: Repeating number is 2 and the missing number is 1.
 */


// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1




class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        arr[i]--;
        
        
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        
        vector<int>ans(2);
        
        for(int i=0;i<n;i++)
        {
            //repeated element
            if(arr[i]/n==2)
            ans[0]=i+1;
            else if(arr[i]/n==0)//missing number
            ans[1]=i+1;
        }
        return ans;
    }
};