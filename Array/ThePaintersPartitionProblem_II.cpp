/* Given an array arr[] where each element denotes the length of a board, and an integer k representing the number
 of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

Determine the minimum amount of time required to paint all the boards, under the constraint that each painter
 can paint only a contiguous sequence of boards (no skipping or splitting allowed).

Examples:

Input: arr[] = [5, 10, 30, 20, 15], k = 3
Output: 35
Explanation: The optimal allocation of boards among 3 painters is - 
Painter 1 → [5, 10] → time = 15
Painter 2 → [30] → time = 30
Painter 3 → [20, 15] → time = 35
Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35 */

// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        long long mid, start = -1, end = 0,count,sum,ans;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            end += arr[i];
            if(start < arr[i])
            start = arr[i];
        }
        
        while(start<=end)
        {
            mid = end + (start-end)/2;
            
            count = 1, sum = 0;
            for(int i=0;i<n;i++)
            {
                sum += arr[i];
                if(sum>mid)
                {
                    count++;
                    sum = arr[i];
                }
            }
            if(count<=k)
            {
                end = mid - 1;
                ans = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};